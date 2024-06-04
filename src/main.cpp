#include "DoublyLinkedList.h"
#include <iostream>

int main() {
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);


    Node<int>* node = list.find(2);
    if (node) {
        std::cout << "Found: " << node->data << std::endl;
    }
    list.displayAll();

    list.remove(2);
    node = list.find(2);
    if (!node) {
        std::cout << "2 has been removed" << std::endl;
    }
    list.displayAll();

    DoublyLinkedList<char> secondList('a');
    secondList.append('b');
    secondList.displayAll();

    return 0;
}
