//Name: Jake Hamilton
//File: GameMap.cpp
//Date: 12/2/24

#include "GameMap.h"
#include "Node.h"
#include <iostream>

// Constructor to initialize the game map (empty by default)
GameMap::GameMap() {}

// Method to add a node to the game map
void GameMap::addNode(int nodeId, const std::string& description) {
    nodes.push_back(Node(nodeId, description));  // Add node directly by value
}

// Method to link two nodes together (bidirectional connection)
void GameMap::linkNodes(int nodeId1, int nodeId2) {
    Node* node1 = getNode(nodeId1);  // Get the first node by its ID
    Node* node2 = getNode(nodeId2);  // Get the second node by its ID
    
    if (node1 && node2) {
        node1->addConnection(node2);  // Add each node to the other's list of connections
        node2->addConnection(node1);  // Bidirectional connection
    }
}

// Method to get a node by its ID
Node* GameMap::getNode(int nodeId) {
    for (auto& node : nodes) {
        if (node.getNodeId() == nodeId) {
            return &node;  // Return a pointer to the node if found
        }
    }
    return nullptr;  // Return nullptr if the node is not found
}

// Method to print the map by displaying all node descriptions
void GameMap::printMap() const {
    for (const auto& node : nodes) {
        std::cout << "Node " << node.getNodeId() << ": " << node.getDescription() << std::endl;
    }
}

// Additional helper methods (optional)
bool GameMap::nodeExists(int nodeId) const {
    for (const auto& node : nodes) {
        if (node.getNodeId() == nodeId) {
            return true;
        }
    }
    return false;
}

// Example of creating 20 nodes and connecting them in a meaningful way
void GameMap::initializeMap() {
    // Create 20 nodes representing locations
    addNode(1, "Forest");
    addNode(2, "Cave");
    addNode(3, "Village");
    addNode(4, "Mountain");
    addNode(5, "Desert");
    addNode(6, "River");
    addNode(7, "Castle");
    addNode(8, "Swamp");
    addNode(9, "Beach");
    addNode(10, "Jungle");
    addNode(11, "Ruins");
    addNode(12, "Tower");
    addNode(13, "Lake");
    addNode(14, "Plains");
    addNode(15, "Tundra");
    addNode(16, "Volcano");
    addNode(17, "Cemetery");
    addNode(18, "Farm");
    addNode(19, "Woodlands");
    addNode(20, "Grove");

    // Connect nodes to form paths (create a simple connection chain)
    linkNodes(1, 2);
    linkNodes(2, 3);
    linkNodes(3, 4);
    linkNodes(4, 5);
    linkNodes(5, 6);
    linkNodes(6, 7);
    linkNodes(7, 8);
    linkNodes(8, 9);
    linkNodes(9, 10);
    linkNodes(10, 11);
    linkNodes(11, 12);
    linkNodes(12, 13);
    linkNodes(13, 14);
    linkNodes(14, 15);
    linkNodes(15, 16);
    linkNodes(16, 17);
    linkNodes(17, 18);
    linkNodes(18, 19);
    linkNodes(19, 20);

    // Optionally, connect the last node to the first to form a circular path
    linkNodes(20, 1);
}
