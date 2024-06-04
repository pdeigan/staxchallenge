#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

template <typename T>
class DoublyLinkedList {
public:
    DoublyLinkedList();
    DoublyLinkedList(T value);
    ~DoublyLinkedList();

    void append(T value);
    void remove(T value);
    Node<T>* find(T value);
    void displayAll();
    Node<T>* fetchHead() { return head; }
    Node<T>* fetchTail() { return tail; }

private:
    Node<T>* head;
    Node<T>* tail;
};

#include "DoublyLinkedList.tpp"
#endif // DOUBLY_LINKED_LIST_H
