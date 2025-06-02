//
// Created by User on 6/2/2025.
//
#include "LinkedList.h"
#include <iostream>
void LinkedList::insert_at_front(int val) {
    if (headPtr == nullptr) {
        headPtr = new Node{val, nullptr};
        tailPtr = headPtr;
    }
    else {
        Node* temp = headPtr;
        headPtr = new Node{val, temp};
    }
}
void LinkedList::insert_at_end(int val) {
    if (tailPtr == nullptr) {
        tailPtr = new Node{val, nullptr};
        headPtr = tailPtr;
    }
    else {
        Node* temp =tailPtr;
        tailPtr = new Node{val, nullptr};
        temp->nextNode = tailPtr;
    }
}
void LinkedList::print_list() const{
    Node* currNode = headPtr;
    while (currNode != nullptr) {
        std::cout << currNode->value << " -> ";
        currNode = currNode->nextNode;
    }
    std::cout << "null\n";
}
