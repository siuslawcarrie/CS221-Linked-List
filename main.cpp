/*Carrie Bailey
CS 221 Spring 2024
Week 9: Linked List Program
 Description: Program creates a linked list of the even numbers from 0 - 18 by creating
 the list, then prints it, then deletes each node.
*/
#include <iostream>

using namespace std;

class Node {
public: //section is a template ***given code
    Node(int val); //***create constructor, use val to set internal value of the object
    void setValue(int value); //***setter for value
    int getValue(); //***getter for value
    Node* getNext(); //***getter for next pointer
    void setNext(Node *n); //***setter for next pointer
    ~Node();

private:
    int value;//***private attribute for val/value
    Node *next = nullptr;//***of the 2 parts to each node, the part that points to next node

};

Node::Node(int val) { //constructor, setting value here instead of using setValue
    value = val;//assign parameter val to local variable value
};

Node::~Node() { //destructor
    cout<<"Destructor is working."<<endl;
};

void Node::setValue(int value) {//sets the value of an existing Node, changes the node
    this->value = value;//assigns local variable value to class attribute value
}

int Node::getValue() {//prototype for getter for value, gets the value -from existing Node
    return value;
}

Node* Node::getNext() {//prototype for getter for pointer
    return next;
}

void Node::setNext(Node *n) {//creates pointer in Node class
    this->next = n;//Node pointer
}

int main() {
    Node* root;
    // ***This will be the unchanging first Node;
    // variable pointer to object in memory called root


    root = new Node(0); // ***root now points to a Node object, new keyword Node class, BEFORE loop
    //above line could use setValue
    Node* end = root;//defines end
    //value 0 bc the constructor takes a value

    // Step 2 code here - use a loop
    //***BEG OF LOOP8
    for (int i = 1; i < 10; i++) {
        Node *temp = new Node(0);
        temp->setValue(i*2);
        end->setNext(temp);//connects end's next pointer to the location of temp in memory
        end = temp; //changes the end pointer to point to where temp is pointing
    }
    cout<<endl;
//    end = root;
    //**END OF LOOP
/*
    temp = new Node(4);//already declared with Node *temp
    end->setNext(temp); //calling set Next method on what end is pointing to
    end = temp;

    temp = new Node(6);
    end->setNext(temp); //calling set Next method on what end is pointing to
    end = temp;

    temp = new Node(8);
    end->setNext(temp); //calling set Next method on what end is pointing to
    end = temp;//must move end each time through the list ***root never changes*/

//   
    // Step 3 code here -- print list
    end = root;
    while (end != nullptr){

        cout<<end->getValue()<<endl;
        end = end -> getNext();

    }
//end = root;
    // }

    // Step 4 code here -- delete each node
    while (end != nullptr){
        Node* temp = end -> getNext();
        delete end;
        end = temp;
    }
    return 0;
}
