#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int x;
    float y;
    struct Node *next;
} Node;

void insert_node(Node **root, int value)
{
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
    {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value;

    if (*root == NULL)
    {
        *root = new_node;
        return;
    }

    Node *curr = *root;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;
}

int main()
{
    Node *root = NULL;
    // Node *root = malloc(sizeof(Node));
    // if (root == NULL)
    // {
    //     exit(2);
    // }
    // root->x = 15;
    // root->next = NULL;

    insert_node(&root, -2);
    insert_node(&root, 23);

    // Node* curr = &root;
    // while(curr != NULL){
    //     printf("%d\n", curr->x);
    //     curr = curr->next;
    // }

    for (Node *curr = root; curr != NULL; curr = curr->next)
    {
        printf("%d\n", curr->x);
    }

    return 0;
}
