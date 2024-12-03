//Name: Jake Hamilton
//File: Node.cpp
//Date: 12/2/24

#include "Node.h"

Node::Node(int id, const std::string& desc) 
    : nodeId(id), description(desc), monster(nullptr) {}

int Node::getNodeId() const {
    return nodeId;
}

std::string Node::getDescription() const {
    return description;
}

void Node::addConnection(Node* node) {
    connectedNodes.push_back(node);
}

const std::vector<Node*>& Node::getConnections() const {
    return connectedNodes;
}

void Node::addMonster(const Monster& m) {
    monster = new Monster(m);
}

void Node::removeMonster() {
    monster = nullptr;
}

Monster* Node::getMonster() const {
    return monster;
}
