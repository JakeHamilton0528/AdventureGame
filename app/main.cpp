//Name: Jake Hamilton
//File: main.cpp
//Date: 12/2/24

#include <iostream>
#include "GameMap.h"
#include "Player.h"
#include "Monster.h"
#include "Asset.h"
#include "Combat.h"

void displayMap(GameMap& gameMap) {
    std::cout << "\nCurrent Game Map:\n";
    for (int i = 1; i <= 20; ++i) {
        Node* node = gameMap.getNode(i);
        std::cout << "Node " << i << ":" << node->getDescription() << "\n";
    }
}

void movePlayerToNode(Player& player, GameMap& gameMap) {
    int targetNode;
    std::cout << "\nWhere would you like to go? Enter a node number (1 to 20): ";
    std::cin >> targetNode;

    // Validate the node number
    if (targetNode < 1 || targetNode > 20) {
        std::cout << "Invalid node number. Please choose a number between 1 and 20.\n";
        return;
    }

    // Move the player to the chosen node
    Node* node = gameMap.getNode(targetNode);  // Get the node from the map
    player.moveToNode(node);  // Update the player's current node

    // Display new position
    std::cout << "\n" << player.getName() << " has moved to " << node->getDescription() << ".\n";
}

void encounterMonster(Player& player, GameMap& gameMap) {
    Node* currentNode = player.getCurrentNode();
    Monster* monster = currentNode->getMonster();
    
    if (monster != nullptr) {
        std::cout << "\nA wild " << monster->getName() << " appears at Node " << currentNode->getDescription() << "!\n";
        
        // Combat: Player attacks the monster
        Combat combat(&player, monster);
        std::cout << "\n" << player.getName() << " attacks the " << monster->getName() << "!\n";
        combat.playerAttack();  

        // Check if monster is defeated
        if (monster->getHealth() <= 0) {
            std::cout << "\n" << monster->getName() << " has been defeated!\n";
            currentNode->removeMonster(); // Remove monster from the node
        } else {
            // Monster attacks player
            std::cout << "\n" << monster->getName() << " attacks " << player.getName() << "!\n";
            combat.monsterAttack();
        }
    }
}

int main() {
    // Create a player named "Alice"
    Player player("Alice");

    // Create some assets (items) for the player
    Asset sword("Sword", "A sharp blade used for combat.");
    Asset healthPotion("Health Potion", "Restores 50 health.");

    // Add assets to the player's inventory
    player.addAsset(sword);
    player.addAsset(healthPotion);

    // Create a game map
    GameMap gameMap;

    // Add nodes to the game map (20 nodes, as specified)
    for (int i = 1; i <= 20; ++i) {
        std::string nodeDescription = "";
        if (i == 1) {
            nodeDescription = "The Forest";
        }
        if (i == 2) {
            nodeDescription = "Cave";
        }
        if (i == 3) {
            nodeDescription = "Village";
        }
        if (i == 4) {
            nodeDescription = "Mountain";
        }
        if (i == 5) {
            nodeDescription = "Desert";
        }
        if (i == 6) {
            nodeDescription = "River";
        }
        if (i == 7) {
            nodeDescription = "Castle";
        }
        if (i == 8) {
            nodeDescription = "Swamp";
        }
        if (i == 9) {
            nodeDescription = "Beach";
        }
        if (i == 10) {
            nodeDescription = "Jungle";
        }
        if (i == 11) {
            nodeDescription = "Ruins";
        }
        if (i == 12) {
            nodeDescription = "Tower";
        }
        if (i == 13) {
            nodeDescription = "Lake";
        }
        if (i == 14) {
            nodeDescription = "Plains";
        }
        if (i == 15) {
            nodeDescription = "Tundra";
        }
        if (i == 16) {
            nodeDescription = "Volcano";
        }
        if (i == 17) {
            nodeDescription = "Cemetary";
        }
        if (i == 18) {
            nodeDescription = "Farm";
        }
        if (i == 19) {
        nodeDescription = "Woodlands";
        }
        if (i == 20) {
            nodeDescription = "The Grove You won";
        }
        gameMap.addNode(i, nodeDescription);
    }

    // Link nodes together to create a path (simple sequential path for demo)
    for (int i = 1; i < 20; ++i) {
        gameMap.linkNodes(i, i + 1);
    }

    // Display the map (the nodes and their connections)
    displayMap(gameMap);

    // Create a monster at Node 10
    Monster goblin("Goblin", 50);
    gameMap.getNode(10)->addMonster(goblin);

    // Display the player's initial status
    std::cout << "\n" << player.getName() << " starts with " << player.getHealth() << " health.\n";

    // Main game loop
    while (true) {
        std::cout << "\n--- Main Menu ---\n";
        std::cout << "1. View Game Map\n";
        std::cout << "2. Move to a new Node\n";
        std::cout << "3. Inspect an asset\n";
        std::cout << "4. Exit the game\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                displayMap(gameMap);
                break;
            case 2:
                movePlayerToNode(player, gameMap);
                encounterMonster(player, gameMap);
                break;
            case 3:
                if (!player.getInventory().empty()) {
                    player.inspectAsset(player.getInventory()[0].getName());
                } else {
                    std::cout << "You have no assets to inspect.\n";
                }
                break;
            case 4:
                std::cout << "Exiting the game...\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}
