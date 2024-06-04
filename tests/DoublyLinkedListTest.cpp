#include <gtest/gtest.h>
#include "DoublyLinkedList.h"

TEST(DoublyLinkedListTest, AppendTest) {
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);

    Node<int>* node = list.find(2);
    ASSERT_NE(node, nullptr);
    EXPECT_EQ(node->data, 2);
}

TEST(DoublyLinkedListTest, RemoveTest) {
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);

    list.remove(2);
    Node<int>* node = list.find(2);
    EXPECT_EQ(node, nullptr);
}

TEST(DoublyLinkedListTest, FindTest) {
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);

    Node<int>* node = list.find(3);
    ASSERT_NE(node, nullptr);
    EXPECT_EQ(node->data, 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
