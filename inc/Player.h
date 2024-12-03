//Name: Jake Hamilton
//File: Player.h
//Date: 12/2/24

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Asset.h"
#include "Node.h"

class Player {
private:
    std::string name;
    int health;
    std::vector<Asset> inventory;
    Node* currentNode;  // This will hold the current node the player is at

public:
    Player(const std::string& playerName) 
        : name(playerName), health(100), currentNode(nullptr) {}

    // Getters and setters
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    void setHealth(int newHealth) { health = newHealth; }
    void heal(int amount) { health += amount; }

    // Inventory management
    void addAsset(const Asset& asset) { inventory.push_back(asset); }
    std::vector<Asset>& getInventory() { return inventory; }
    void inspectAsset(const std::string& assetName) const;

    //Method to take damage
    void takeDamage(int amount) {health = std::max(0, health - amount);}
    
    // Current node management
    Node* getCurrentNode() const { return currentNode; }
    void setCurrentNode(Node* node) { currentNode = node; }

    // Methods for interaction
    void dropAsset(const std::string& assetName);
    void moveToNode(Node* node);
};

#endif
