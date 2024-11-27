//
// Created by siusl on 11/24/2024.
//
#include "TextClass.hpp"
#include <iostream>

void TextClass::addHead(char value) { //adds value to the head of the list.
 if ((this->head == nullptr) && (this->tail == nullptr)) {
        TextLink *temp = new TextLink(value);
        head = temp;
        tail = temp;
    }
    else{
        TextLink *temp = new TextLink(value, nullptr, head);//passing in head pointer
        head->setNext(temp); //establishes link from current head to new head
        head = temp;
    }
 std::cout<<"addHead"<<std::endl;
}

void TextClass::addTail(int value) { //adds value to the tail of the list.
    std::cout<<"addTail"<<std::endl;
}//tail is akin to head in add Head and tail's link is previous not next

//char TextClass::getHead() { // returns the value from the head of the list. (throws exception if list is empty)
//return getValue(head);


int TextClass::getTail() { //returns the value from the tail of the list. (throws exception if list is empty)
    std::cout<<"getTail"<<std::endl;
    return 0;
}

int TextClass::getHead() { //returns the value from the tail of the list. (throws exception if list is empty)
    std::cout<<"getHead"<<std::endl;
    return 0;
}

int TextClass::removeHead() { //removes the value at the head of the list.
    if ((this->head == nullptr) && (this->tail == nullptr)) {
        throw std::out_of_range("Empty List");
    }
    else return 0;
    std::cout<<"removeHead"<<std::endl;
}

int TextClass::removeTail() { //removes the value at the tail of the list.
    if ((this->head == nullptr) && (this->tail == nullptr)) {
        throw std::out_of_range("Empty List");
    }
    else return 0;
    std::cout<<"removeTail"<<std::endl;
}

int TextClass::find(int value) { //returns true if value is present in the list, returns false if not.
    std::cout<<"find"<<std::endl;
    return 0;
}

void TextClass::findRemove(int value) { // returns true and removes the value if present, returns false if not.
    if ((this->head == nullptr) && (this->tail == nullptr)) {
        throw std::out_of_range("Empty List");
    }
    std::cout<<"findRemove"<<std::endl;
}

std::string TextClass::displayList() { // returns a string containing the contents of the list from head to tail. Should
//        insert a space between each value.
return "displayList";

}

//***void append? int otherList? **GO TO text class Linked List
void
TextClass::append(int *otherList) { //hooks lists together, pointer to linked list//appends the contents of otherList to the tail of this list. Note that
//    otherList is an object, so should be passed by const reference (except for Python which does
//    not know about references).
    std::cout << "append" << std::endl;
}

int TextClass::findNext(int value) { //like find, but if findNext is called for the same value after a success, it
//    should find the next instance of that value, wrapping if necessary.
std::cout<<"findNext"<<std::endl;
return 0;
}

