#include <stdio.h>

void main()
{
    struct player
    {
        char *name;
        int score;
        int hp;
        struct weapon *weapon;
    };

    struct weapon
    {
        char *name;
        int attack;
        int guard;
    };

    struct player player;
    struct player *player1;
    player1 = &player;

    player1->name = "Rafid Hilmi";
    player1->score = 0;
    player1->hp = 100;

    player1->weapon->name = "Katana";
    player1->weapon->attack = 16;
    player1->weapon->guard = 10;

    // cetak status player
    printf("PLAYER STATUS\n");
    printf("Name: %s\n", player1->name);
    printf("Score: %d\n", player1->score);
    printf("Hp: %d\n", player1->hp);
    printf("weapon\n");
    printf(" name: %s\n", player1->weapon->name);
    printf(" attack: %d\n", player1->weapon->attack);
    printf(" guard: %d\n", player1->weapon->guard);
}