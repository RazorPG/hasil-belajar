#include <stdio.h>

int main()
{
    struct player
    {
        char *name;
        unsigned int level;
    };

    union enemy
    {
        char *name;
        unsigned int hp;
    };

    struct player player1;
    player1.name = "Razorsan";
    player1.level = 9999;

    printf("player\t: %d (address = %x)\n", sizeof(player1), &player1);
    printf(" - name\t: %d (address = %x)\n", sizeof(player1.name), &player1.name);
    printf(" - level\t: %d (address = %x)\n", sizeof(player1.level), &player1.level);

    union enemy zombie;
    zombie.name = "zombie 1";
    zombie.hp = 100;

    printf("enemy\t: %d (address = %x)\n", sizeof(zombie), &zombie);
    printf(" - name\t: %d (address = %x)\n", sizeof(zombie.name), &zombie.name);
    printf(" - hp\t: %d (address = %x)\n", sizeof(zombie.hp), &zombie.hp);
}