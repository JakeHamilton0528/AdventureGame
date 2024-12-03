// tests/NodeTests.cpp
#include <gtest/gtest.h>
#include "Node.h"

// Test for the Node constructor and getters
TEST(NodeTest, ConstructorAndGetters) {
    Node node(1, "Forest");

    // Test node ID
    EXPECT_EQ(node.getNodeId(), 1);


    // Test node description
    EXPECT_EQ(node.getDescription(), "Forest");
}

// Test adding a connection to a node
TEST(NodeTest, AddConnection) {
    Node node1(1, "The Forest");
    Node node2(2, "The Village");

    node1.addConnection(&node2);

    // Ensure that node1 has node2 in its list of connected nodes
    const std::vector<Node*>& connections = node1.getConnections();
    EXPECT_EQ(connections.size(), 1);
    EXPECT_EQ(connections[0]->getNodeId(), 2);
}

// Test monster functionality
TEST(NodeTest, AddMonster) {
    Node node(1, "The Forest");
    Monster goblin("Goblin", 50);

    node.addMonster(goblin);

    // Ensure the node has a monster
    Monster* monster = node.getMonster();
    ASSERT_NE(monster, nullptr);
    EXPECT_EQ(monster->getName(), "Goblin");
    EXPECT_EQ(monster->getHealth(), 50);
}

// Test removing monster from node
TEST(NodeTest, RemoveMonster) {
    Node node(1, "The Forest");
    Monster goblin("Goblin", 50);

    node.addMonster(goblin);
    node.removeMonster();

    // Ensure the monster has been removed
    EXPECT_EQ(node.getMonster(), nullptr);
}

