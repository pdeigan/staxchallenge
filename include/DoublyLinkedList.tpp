#include "DoublyLinkedList.h"
#include <iostream>

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList(T value) {
    Node<T>* newNode = new Node<T>(value);
    head = tail = newNode;
}

/**
 * Destructor
 *
 * Step through the list until we reach the tail,
 * deleting each node as we go.
 */
template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    Node<T>* current = head;
    while (current) {
        Node<T>* next = current->next;
        delete current;
        current = next;
    }
}

/**
 * Add a new value to the end of the list
 *
 * @param value Value we are appending
 * @return void
 */
template <typename T>
void DoublyLinkedList<T>::append(T value) {
    Node<T>* newNode = new Node<T>(value);
    if (!tail) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

/**
 * Remove a value in the linked list
 *
 * @param value Value we are removing. This function will
 *              only remove the first instance in the list
 * @return void
 */
template <typename T>
void DoublyLinkedList<T>::remove(T value) {
    Node<T>* current = head;
    while (current) {
        if (current->data == value) {
            //if we find our value, point the adjacent nodes at each other
            if (current->prev) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }
            if (current->next) {
                current->next->prev = current->prev;
            } else {
                tail = current->prev;
            }
            delete current;
            return;
        }
        current = current->next;
    }
}

/**
 * Find a value in the linked list
 *
 * @param value Value we are searching for 
 * @return Node containing the value, or nullptr if `values` is not found.
 */
template <typename T>
Node<T>* DoublyLinkedList<T>::find(T value) {
    Node<T>* current = head;
    while (current) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

/**
 * Display the full list values
 *
 * @return void
 */
template <typename T>
void DoublyLinkedList<T>::displayAll() {
    Node<T>* current = head;
    std::cout << "Complete list: ";
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}
