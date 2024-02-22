#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int x;
    float y;
    struct Node *next;
} Node;

int main()
{
    Node root;
    // Node root , element2, element3, element4;
    root.x = 15;
    root.next = malloc(sizeof(Node));
    root.next->x = 20;
    root.next->next = NULL;
    // element2.x = 10;
    // element2.y = 12.5;
    // element2.next = &element3;
    // element3.x = 20;
    // element3.y = 5.6;
    // element3.next = &element4;
    // element4.next = NULL;
    printf("FIRST = %i\n", root.x);
    printf("SECOND = %i\n", root.next->x);
    free(root.next);

    // printf("THIRD = %f\n", root.next->y);
    // printf("FOURTH = %f\n", root.next->next->y);
    // element4.x = root.x + root.next->x + root.next->next->x;
    // printf("FIVETH = %i\n", element4.x);
    return 0;
}
