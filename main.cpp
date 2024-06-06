#include <iostream>

using namespace std;

class Node {
public: //section is a template ***given code
    Node(int val); //***create constructor, use val to set internal value of the object
    void setValue(int value); //***setter for value
    int getValue(); //***getter for value
    Node *getNext(); //***getter for next pointer
    void setNext(Node *n); //***setter for next pointer
    ~Node();

private:
    int value;//***
    Node *next = NULL;//*** (added = NULL)

};

Node::Node(int val) { //constructor
    value = val;
    cout << "constructor" << endl;
};

Node::~Node() { //destructor
    cout << "destructor" << endl;
};

void Node::setValue(int value) {
    this->value = value;
}

int Node::getValue() {
    return value;
}

Node *Node::getNext() {
    return next;
}

void Node::setNext(Node *n) {
    this->next = n;
}

int main() {
    Node *root;
    // ***This will be the unchanging first Node;
    // variable pointer to object in memory called root


    root = new Node(0); // ***root now points to a Node object, new keyword Node class, BEFORE loop
    Node* end = root;
    //value 0 bc the constructor takes a value
    //***BEG OF LOOP
    Node *temp = new Node(2);
    end->setNext(temp);//connects root's pointer to value 2
    end = temp; //declares end pointer
    //**END OF LOOP

    temp = new Node(4);//already declared with Node *temp
    end->setNext(temp); //calling set Next method on what end is pointing to
    end = temp;

    temp = new Node(6);
    end->setNext(temp); //calling set Next method on what end is pointing to
    end = temp;

    temp = new Node(8);
    end->setNext(temp); //calling set Next method on what end is pointing to
    end = temp;//must move end each time through the list ***root never changes


    // Step 2 code here - use a loop
    /*   Node *temp = new Node(2);//creates new node instance in memory and assigns it to Node pointer "temp"
       while (end != NULL) {//loop for printing**Delete loop is the same - track current node & just finished (delete), 2 pointers, move both 
           node = root; //keeps track of where you're at in the list
           node->setNext(temp); //hooks 2 together
           node->getNext();
           //pointer to keep track of where you were then delete that
       }*/

    cout << "node: " << node << " root: " << root << "set Next: " << endl;
    // Step 3 code here

    // Step 4 code here

    return 0;
}
