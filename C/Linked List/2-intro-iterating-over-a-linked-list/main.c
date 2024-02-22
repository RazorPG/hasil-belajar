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
    root.x = 15;
    root.next = calloc(10, sizeof(Node));
    root.next->x = 20;
    root.next->next = calloc(10, sizeof(Node));
    root.next->next->x = 25;
    root.next->next->next = NULL;

    // Node* curr = &root;
    // while(curr != NULL){
    //     printf("%d\n", curr->x);
    //     curr = curr->next;
    // }

    for (Node *curr = &root; curr != NULL; curr = curr->next)
    {
        printf("%d\n", curr->x);
    }

    free(root.next->next);
    free(root.next);

    return 0;
}
