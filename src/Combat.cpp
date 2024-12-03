//Name: Jake Hamilton
//File: Combat.cpp
//Date: 12/2/24

#include "Combat.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Constructor to initialize the combat
Combat::Combat(Player* player, Monster* enemy)
    : player(player), enemy(enemy), gameOver(false) {
    // Seed random number generator for combat randomness
    std::srand(std::time(nullptr));
}

// Method to start the combat sequence
void Combat::startCombat() {
    std::cout << "A wild " << enemy->getName() << " appears!\n";
    while (!isGameOver()) {
        displayStatus();
        playerAttack();
        if (isGameOver()) {
            break;
        }
        monsterAttack();
    }

    if (player->getHealth() <= 0) {
        std::cout << "You have been defeated by " << enemy->getName() << "!\n";
    } else if (enemy->getHealth() <= 0) {
        std::cout << "You defeated " << enemy->getName() << "!\n";
    }
}

// Player attacks the enemy
void Combat::playerAttack() {
    std::cout << player->getName() << " attacks " << enemy->getName() << "!\n";
    int damage = std::rand() % 10 + 1;  // Random damage between 1 and 10
    enemy->takeDamage(damage);
    std::cout << "The attack deals " << damage << " damage to " << enemy->getName() << ".\n";
}

// Monster attacks the player
void Combat::monsterAttack() {
    std::cout << enemy->getName() << " attacks " << player->getName() << "!\n";
    int damage = std::rand() % 10 + 1;  // Random damage between 1 and 10
    player->takeDamage(damage);
    std::cout << "The attack deals " << damage << " damage to " << player->getName() << ".\n";
}

// Check if the combat is over
bool Combat::isGameOver() const {
    return player->getHealth() <= 0 || enemy->getHealth() <= 0;
}

// Display the current status of the combat
void Combat::displayStatus() const {
    std::cout << "\n--- Combat Status ---\n";
    std::cout << player->getName() << " Health: " << player->getHealth() << "\n";
    std::cout << enemy->getName() << " Health: " << enemy->getHealth() << "\n";
    std::cout << "---------------------\n";
}
