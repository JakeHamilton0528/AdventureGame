//Name: Jake Hamilton
//File: Node.h
//Date: 12/2/24

#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>
#include "Monster.h"

class Node {
private:
    int nodeId;
    std::string description;
    std::vector<Node*> connectedNodes;  // Nodes connected to this one
    Monster* monster;  // Optional monster that could appear on this node

public:
    Node(int id, const std::string& desc);  // Constructor declaration

    int getNodeId() const;  // Declaration
    std::string getDescription() const;  // Declaration
    void addConnection(Node* node);  // Declaration
    const std::vector<Node*>& getConnections() const;  // Declaration
    void addMonster(const Monster& m);  // Declaration
    void removeMonster();  // Declaration
    Monster* getMonster() const;  // Declaration
};

#endif  // NODE_H
