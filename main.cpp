#include <iostream>

class Node {
public: //section is a template ***given code
    Node(int val); //***create constructor, use val to set internal value of the object
    void setValue(int x); //***setter for value
    int getValue(); //***getter for value
    Node* getNext(); //***getter for next pointer
    void setNext(Node* n); //***setter for next pointer


private:
    int value;//***
    Node *next = NULL;//*** (added = NULL)

};

Node::Node(int val) { //constructor
};

~Node::Node(int val) { //destructor
};



int main() {

    Node *root;         // ***This will be the unchanging first Node;
    // variable pointer to object in memory called root
    root = new Node(0); // ***root now points to a Node object, new keyword Node class
    //value 0 bc the constructor takes a value
    // Step 2 code here - use a loop
    int x = 0, node = 0;
    Node* temp = new Node (x);//creates new node instance in memory and assigns it to Node pointer "temp"

    node = root; //keeps track of where you're at in the list
    node ->setNext(temp); //hooks 2 together
    // Step 3 code here

    // Step 4 code here

    return 0;
}
