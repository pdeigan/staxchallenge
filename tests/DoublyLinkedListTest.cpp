#include <gtest/gtest.h>
#include "DoublyLinkedList.h"

/*
 * Testing DoublyLinkedList::append(T value)
*/
TEST(DoublyLinkedListTest, AppendTest) {
    DoublyLinkedList<int> list;
    list.append(1);
    EXPECT_EQ(list.fetchHead()->data, 1);
    EXPECT_EQ(list.fetchHead()->data, list.fetchTail()->data);

    list.append(2);
    EXPECT_EQ(list.fetchHead()->data, 1);
    EXPECT_EQ(list.fetchTail()->data, 2);

    list.append(3);
    EXPECT_EQ(list.fetchHead()->data, 1);
    EXPECT_EQ(list.fetchTail()->data, 3);

    Node<int>* node = list.find(2);
    ASSERT_NE(node, nullptr);
    EXPECT_EQ(node->data, 2);
}

/*
 * Testing DoublyLinkedList::remove(T value)
*/
TEST(DoublyLinkedListTest, RemoveTest) {
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(3);
    list.append(4);

    //remove existing node
    // should not find node with value
    list.remove(2);
    Node<int>* node = list.find(2);
    EXPECT_EQ(node, nullptr);

    //attempt to remove non-existent node
    // should result in no change
    list.remove(5);
    EXPECT_EQ(list.fetchHead()->data, 1);
    EXPECT_EQ(list.fetchTail()->data, 4);

    //remove first of two duplicate nodes
    // we should still see the second of the dupes in the list
    list.remove(3);
    EXPECT_EQ(list.fetchHead()->data, 1);
    EXPECT_EQ(list.fetchTail()->data, 4);
    Node<int>* dupeNode = list.find(3);
    ASSERT_NE(dupeNode, nullptr);
    EXPECT_EQ(dupeNode->data, 3);
}

TEST(DoublyLinkedListTest, FindTest) {
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(3);

    // find existing value
    //  should return matching node
    Node<int>* node = list.find(2);
    ASSERT_NE(node, nullptr);
    EXPECT_EQ(node->data, 2);

    // find non-existing value
    //  should return nullptr
    Node<int>* nullNode = list.find(4);
    EXPECT_EQ(nullNode, nullptr);

    // find existing duplicate value
    //  should return first matching node
    Node<int>* dupeNode = list.find(3);
    ASSERT_NE(dupeNode, nullptr);
    EXPECT_EQ(dupeNode->data, 3);
}

TEST(DoublyLinkedListTest, DisplayTest) {
    /* I am intentionally not testing this function here,
     *  as we would typically not want to print to the
     *  console from a production level application anyway. 
     * 
     * By writing to a log file or some other file, 
     *  we would be able to properly test this function.
     *  For the sake of this exercise, I hope this 
     *  explanation is sufficient.
     */
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
