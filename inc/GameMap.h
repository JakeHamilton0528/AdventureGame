//Name: Jake Hamilton
//File: GameMap.h
//Date: 12/2/24

#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <vector>
#include <string>
#include <iostream> // For console output if necessary
#include "Node.h"

class GameMap {
private:
    std::vector<Node> nodes;  // Vector to hold all the nodes in the game map

public:
    // Constructor to initialize the game map (empty by default)
    GameMap();

    // Method to add a node to the map
    void addNode(int nodeId, const std::string& description);

    // Method to link two nodes together (bidirectional connection)
    void linkNodes(int nodeId1, int nodeId2);

    // Method to get a node by its ID
    Node* getNode(int nodeId);

    // Method to print the map by displaying all node descriptions
    void printMap() const;

    // Additional helper methods (optional)
    bool nodeExists(int nodeId) const;

    // Method to initialize and create the 20 nodes and links between them
    void initializeMap();
};

#endif  // GAMEMAP_H
