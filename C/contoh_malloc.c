#include <stdio.h>
#include <stdlib.h>

void main()
{
    struct player
    {
        char *name;
        unsigned int hp;
        unsigned int xp;
        unsigned int level;
    };

    struct player *player1 = malloc(sizeof(struct player));

    player1->name = "rafid hilmi";
    player1->hp = 100;
    player1->xp = 5;
    player1->level = 1;

    printf(":: PLAYER STATUS ::\n");
    printf("name : %s\n", player1->name);
    printf("hp : %d\n", player1->hp);
    printf("xp : %d\n", player1->xp);
    printf("level : %d\n", player1->level);
}