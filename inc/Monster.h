//Name: Jake Hamilton
//File: Monster.h
//Date: 12/2/24

#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    // Constructor to initialize a monster with a name and health
    Monster(const std::string& name, int health);

    // Getter for the monster's name
    std::string getName() const;

    // Getter for the monster's health
    int getHealth() const;

    // Method to take damage and reduce health
    void takeDamage(int damage);

    // Check if the monster is alive
    bool isAlive() const;

private:
    std::string name;  // The name of the monster
    int health;        // The health of the monster
};

#endif // MONSTER_H
