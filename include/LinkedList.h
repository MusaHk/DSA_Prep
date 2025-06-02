//
// Created by User on 6/2/2025.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct Node {
    int value;
    Node* nextNode;
};
class LinkedList {
private:
    Node* headPtr;
    Node* tailPtr;
public:
    LinkedList():headPtr{nullptr}, tailPtr{nullptr}{}
    void insert_at_front(int val);
    void insert_at_end(int val);
    void print_list() const;
};

#endif //LINKEDLIST_H
