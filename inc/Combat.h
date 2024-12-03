//Name: Jake Hamilton
//File: Combat.h
//Date: 12/2/24

#ifndef COMBAT_H
#define COMBAT_H

#include "Player.h"
#include "Monster.h"

class Combat {
public:
    // Constructor to initialize the combat with a player and an enemy monster
    Combat(Player* player, Monster* enemy);

    //Default constructor 
    Combat() : player(nullptr), enemy(nullptr), gameOver(false) {}

    // Start combat between the player and the monster
    void startCombat();

    // Player attacks the enemy
    void playerAttack();

    // Monster attacks the player
    void monsterAttack();

    // Check if the player or the monster has been defeated
    bool isGameOver() const;

    // Display current combat stats
    void displayStatus() const;

private:
    Player* player;        // The player involved in the combat
    Monster* enemy;        // The enemy monster
    bool gameOver;         // Boolean flag to check if the game is over
};

#endif // COMBAT_H
