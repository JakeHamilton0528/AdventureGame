//Name: Jake Hamilton
//File: Monster.cpp
//Date: 12/2/24

#include "Monster.h"

// Constructor to initialize a monster with a name and health
Monster::Monster(const std::string& name, int health)
    : name(name), health(health) {}

// Getter for the monster's name
std::string Monster::getName() const {
    return name;
}

// Getter for the monster's health
int Monster::getHealth() const {
    return health;
}

// Method to take damage and reduce health
void Monster::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;  // Ensure health doesn't go below zero
    }
}

// Check if the monster is alive
bool Monster::isAlive() const {
    return health > 0;
}
