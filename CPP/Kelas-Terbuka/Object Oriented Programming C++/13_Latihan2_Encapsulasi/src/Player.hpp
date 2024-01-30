#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "Weapon.hpp"

class Player
{
private:
    std::string name;
    double health;
    Weapon *weapon;

public:
    Player(const char *);
    void display();
    // setter
    void equipWeapon(Weapon *);
    void attack(Player *);
    // getter
    std::string getName();
    // setter

private:
    void defense(double);
};

#endif