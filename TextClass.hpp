//
// Created by siusl on 11/24/2024.
//

#ifndef TEXTCLASS_LINKEDLISTS_TEXTCLASS_HPP
#define TEXTCLASS_LINKEDLISTS_TEXTCLASS_HPP

#include <string>
#include <stdexcept>

# include <string>

//LinkedList class - keep track of getting into the first link, text class, pointer to the first one, add reference for advanced lab
//Link class - keeps track of links, value, next & prev points
class TextLink {
private:
    char value;
    TextLink *next;
    TextLink *prev;

public:
    //constructor
    TextLink(char value, TextLink *next = nullptr, TextLink *prev = nullptr) {//change all below to char value
        this->value = value;
        this->next = next;
        this->prev = prev;
    };

    //no destructor, this class does not do any memory allocations
    //access methods
    char getValue() {
        return this->value;
    }

    TextLink *getNext() {
        return this->next;
    }

    TextLink *getPrev() {
        return this->prev;
    }

    void setNext(TextLink *prev) {
        this->next = next;
    }

    void setPrev(TextLink *prev) {
        this->prev = prev; //analogy this->name "Jacob" "Carrie", = prev - previous person's name
    }

};

class TextClass { //linked list class - each one is an object
private:

    TextLink *head = nullptr;//name of the link TextClass is the collection of links
    TextLink *tail = nullptr;

public:
    // constructor
//    TextClass(); **in this case, no constructor need. Would need if you needed to take in a value for 1st link. OR if we needed to initialize head and/or tail
//destructor
//    ~TextClass();//destructor needed whenever we are calling new

    //base methods **PER LAB INSTRUCTIONS
    void addHead(char value); //adds value to the head of the list.
        /*if empty, error message.  */


    void addTail(int value); //adds value to the tail of the list.


    int getHead();  // returns the value from the head of the list. (throws exception if list is empty)


    int getTail();  //returns the value from the tail of the list. (throws exception if list is empty)


    int removeHead();  //removes the value at the head of the list.


    int removeTail(); //removes the value at the tail of the list.


    int find(int value); //returns true if value is present in the list, returns false if not.


    void findRemove(int value); // returns true and removes the value if present, returns false if not.


    std::string displayList();  // returns a string containing the contents of the list from head to tail. Should
//        insert a space between each value.


    //***void append? int otherList? **GO TO text class Linked List
    void
    append(int *otherList); //hooks lists together, pointer to linked list//appends the contents of otherList to the tail of this list. Note that
//    otherList is an object, so should be passed by const reference (except for Python which does
//    not know about references).

    int findNext(int value);  //like find, but if findNext is called for the same value after a success, it
//    should find the next instance of that value, wrapping if necessary.


};

#endif //TEXTCLASS_LINKEDLISTS_TEXTCLASS_HPP