#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player *player1 = new Player("sniper");
    Weapon *weapon1 = new Weapon("Senapan", 50);

    // implementasi setter untuk mengequip weapon
    player1->equipWeapon(weapon1);
    player1->display();

    Player *player2 = new Player("swordmen");
    Weapon *weapon2 = new Weapon("pedang", 40);

    // implementasi setter untuk mengequip weapon
    player2->equipWeapon(weapon2);
    player2->display();

    player1->attack(player2);
    player2->attack(player1);
    player1->display();
    player2->display();
    player1->attack(player2);
    player2->attack(player1);
    player1->display();
    player2->display();

    return 0;
}
