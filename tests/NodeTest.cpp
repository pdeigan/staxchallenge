#include <gtest/gtest.h>
#include "Node.h"

TEST(NodeTest, IntConstructorTest) {
    Node<int> node(INT_MAX);
    EXPECT_EQ(node.data, INT_MAX);
    EXPECT_EQ(node.next, nullptr);
    EXPECT_EQ(node.prev, nullptr);
}

TEST(NodeTest, NegativeIntConstructorTest) {
    Node<int> node(INT_MIN);
    EXPECT_EQ(node.data, INT_MIN);
    EXPECT_EQ(node.next, nullptr);
    EXPECT_EQ(node.prev, nullptr);
}

TEST(NodeTest, CharConstructorTest) {
    Node<char> node('a');
    EXPECT_EQ(node.data, 'a');
    EXPECT_EQ(node.next, nullptr);
    EXPECT_EQ(node.prev, nullptr);
}

TEST(NodeTest, SpecialCharConstructorTest) {
    Node<char> node('~');
    EXPECT_EQ(node.data, '~');
    EXPECT_EQ(node.next, nullptr);
    EXPECT_EQ(node.prev, nullptr);
}

TEST(NodeTest, BoolConstructorTest) {
    Node<bool> node(true);
    EXPECT_EQ(node.data, true);
    EXPECT_EQ(node.next, nullptr);
    EXPECT_EQ(node.prev, nullptr);
}

TEST(NodeTest, FloatConstructorTest) {
    float num = 10.4;
    Node<float> node(10.4);
    EXPECT_EQ(node.data, num);
    EXPECT_EQ(node.next, nullptr);
    EXPECT_EQ(node.prev, nullptr);
}

TEST(NodeTest, DoubleConstructorTest) {
    double num = 10.4123456789;
    Node<double> node(10.4123456789);
    EXPECT_EQ(node.data, num);
    EXPECT_EQ(node.next, nullptr);
    EXPECT_EQ(node.prev, nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
