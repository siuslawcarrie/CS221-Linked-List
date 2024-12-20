//
// Created by siusl on 11/24/2024.
//
#include "TextClass.hpp"
#include <iostream>
#include <string>
#include <sstream>

void TextClass::addHead(char value) { //adds value to the head of the list.
//    std::cout << "mc beginning of addHead" << std::endl;//DEBUG
//    std::cout << "char: " <<value<< std::endl;//DEBUG
    TextLink *temp = new TextLink(value);
    if (isEmpty()) {
        head = temp;
        tail = temp;
    } else {
        temp->setPrev(head);
        head->setNext(temp);
//        temp->setPrev(temp);
//        head ->setPrev = temp;
//        head = temp;
        /*  TextLink *temp = new TextLink(value, nullptr, head);//passing in head pointer
          head->setNext(temp); //establishes link from current head to new head*/
        head = temp;
    }
//    std::cout << "mc end of addHead" << std::endl; //DEBUG
}

//***helper function for isempty
void TextClass::addTail(char value) { //adds value to the tail of the list.
//    std::cout << "mc beginning of addTail" << std::endl; //DEBUG
//tail is akin to head in add Head and tail's link is previous not next

// if the list is empty, initialize both head and tail
    if (isEmpty()) {
        head = tail = new TextLink(value);
    }
// otherwise, just add a new link at the tail
    else {
// create the new link with nullptr for next and tail for prev
        TextLink *temp = new TextLink(value, tail);//prev defaults to nullptr

// set last link and tail to point to the new link
        tail->setPrev(
                temp);//must use derefencing arrow when using * temp (a pointer) tail.setNext accessing fields in a struct or members of a class directly
        tail = temp;

    }
//    std::cout << "mc end of addTail" << std::endl; //DEBUG
}
//char TextClass::getHead() { // returns the value from the head of the list. (throws exception if list is empty)
//return getValue(head);


char TextClass::getTail() { //returns the value from the tail of the list. (throws exception if list is empty)
//    std::cout << "getTail" << std::endl; //DEBUG
    if (isEmpty()) {
        throw std::out_of_range("Empty list.");
    }
    return tail->getValue();
}

char TextClass::getHead() { //returns the value from the tail of the list. (throws exception if list is empty)
//    std::cout << "mc getHead" << std::endl;//DEBUG
    if (isEmpty()) {
        throw std::out_of_range("Empty list.");
    }
    return head->getValue();
}

void TextClass::removeHead() { //removes the value at the head of the list.
    if ((this->head == nullptr) && (this->tail == nullptr)) {
        throw std::out_of_range("Empty List");
    }
    if (head->getPrev() != nullptr) {

        TextLink *temp = head->getPrev();

        temp->setNext(nullptr);
        delete head;
        head = temp;
    } else {
        delete head;
        head = nullptr;
        tail = nullptr;
    }

//    std::cout << "mc removeHead" << std::endl;//DEBUG

}

void TextClass::removeTail() { //removes the value at the tail of the list.
    if ((this->head == nullptr) && (this->tail == nullptr)) {
        throw std::out_of_range("Empty List");
    }
    if (tail->getNext() != nullptr) {//access the tail link

        TextLink *temp = tail->getNext();

        temp->setPrev(nullptr);
        delete tail;
        tail = temp;
    } else {
        delete tail;
        head = nullptr;
        tail = nullptr;
    }
}

bool TextClass::find(char value) { //returns true if value is present in the list, returns false if not.
    std::cout << "find" << std::endl;//DEBUG
    return 0;
}

bool TextClass::findRemove(char value) {// returns true and removes the value if present, returns false if not.
    if ((this->head == nullptr) && (this->tail == nullptr)) {
        throw std::out_of_range("Empty List");
    }
    TextLink *ptr = head;
    // walk down the list, looking for the value
    // start at the head
//    std::cout << "findRemove" << std::endl; //DEBUG
// continue until we run out of links
    while (ptr != nullptr) {//testing if we are at the end of the list

        // see if this link is what we want
        if (ptr->getValue() == value) {//finding the value

            // special case head use existing code
            if (ptr == head) {
                removeHead();
            } else if (ptr == tail) {
                removeTail();
            } else { // typical link, set prev and next to point around it
                TextLink *nextLink = ptr->getNext();
                TextLink *prevLink = ptr->getPrev();
                //next's prev points to prev, previous' next points to next
                nextLink->setPrev(prevLink);
                prevLink->setNext(nextLink);
                // delete the old link (C++ only)
                delete ptr;
                // and return
                return true;
            }
        }
            // not there, keep looking
        else {
            ptr = ptr->getNext();//ptr is moving down the list
        }
    }
        // done with list
        return false;

}


    std::string TextClass::displayList() { // returns a string containing the contents of the list from head to tail. Should
//        insert a space between each value
if (isEmpty()){
    throw std::out_of_range("Empty List");
}
std::stringstream buffer; //buffer is the variable name
    TextLink *ptr = head;
        // walk down the list, looking for the value
        // start at the head
//    std::cout << "findRemove" << std::endl; //DEBUG
// continue until we run out of links
        while (ptr != nullptr) {
           buffer << ptr->getValue(); //putting value into buffer
           ptr = ptr->getNext();
        }

        return buffer.to_string();  

    }

    bool TextClass::isEmpty() {
        if ((this->head == nullptr) && (this->tail == nullptr)) {
            return true;
        }
        return false;
    }

//***void append? int otherList? **GO TO text class Linked List
    void
    TextClass::append(
            TextClass *otherList) { //hooks lists together, pointer to linked list//appends the contents of otherList to the tail of this list. Note that
//    otherList is an object, so should be passed by const reference (except for Python which does
//    not know about references).
        std::cout << "append" << std::endl;
    }

    int TextClass::findNext(char value) { //like find, but if findNext is called for the same value after a success, it
//    should find the next instance of that value, wrapping if necessary.
        std::cout << "findNext" << std::endl;
        return 0;
    }
//
// Created by siusl on 11/28/2024.
//
