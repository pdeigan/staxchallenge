#include "DoublyLinkedList.h"
#include <iostream>

int main() {
    std::cout << "Create a list with numbers 1-5.\n";
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.displayAll();

    std::cout << "\nSearch for value 2 in the list.\n";
    Node<int>* node = list.find(2);
    if (node) {
        std::cout << "Found: " << node->data << std::endl;
    }


    std::cout << "\nRemove node with value 2 from the list.\n";
    list.remove(2);
    node = list.find(2);
    if (!node) {
        std::cout << "2 has been removed" << std::endl;
    }
    list.displayAll();


    std::cout << "\nBuild a second list of different type, using overloaded constructor.\n";
    DoublyLinkedList<char> secondList('a');
    secondList.append('b');
    secondList.append('c');
    secondList.displayAll();

    return 0;
}
