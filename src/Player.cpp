//Name: Jake Hamilton
//File: Player.cpp
//Date: 12/2/24

#include "Player.h"
#include <iostream>

void Player::inspectAsset(const std::string& assetName) const {
    for (const auto& asset : inventory) {
        if (asset.getName() == assetName) {
            std::cout << "Inspecting " << asset.getName() << ": " << asset.getDescription() << std::endl;
            return;
        }
    }
    std::cout << "Asset not found in inventory.\n";
}

void Player::dropAsset(const std::string& assetName) {
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->getName() == assetName) {
            std::cout << name << " drops the " << it->getName() << ".\n";
            inventory.erase(it);
            return;
        }
    }
    std::cout << "Asset not found in inventory.\n";
}

void Player::moveToNode(Node* node) {
    currentNode = node;
    std::cout << name << " has moved to Node " << currentNode->getDescription() << ".\n";
}
