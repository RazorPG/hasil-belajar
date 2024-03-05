#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int x;
    float y;
    struct Node *next;
} Node;

void lastNode(Node **head, Node **last, int c, float d)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->x = c;
    newNode->y = d;
    newNode->next = NULL;

    if (head == NULL)
    {
        *head = newNode;
        *last = newNode;
    }
    else
    {
        (*last)->next = newNode;
        *last = newNode;
    }
}

int main()
{
    Node *head, *last = NULL;
    // Node root;
    // root.x = 15;
    // root.next = calloc(10, sizeof(Node));
    // root.next->x = 20;
    // root.next->next = calloc(10, sizeof(Node));
    // root.next->next->x = 25;
    // root.next->next->next = NULL;

    // // Node* curr = &root;
    // // while(curr != NULL){
    // //     printf("%d\n", curr->x);
    // //     curr = curr->next;
    // // }

    // for (Node *curr = &root; curr != NULL; curr = curr->next)
    // {
    //     printf("%d\n", curr->x);
    // }

    lastNode(&head, &last, 12, 5.5);
    lastNode(&head, &last, 11, 4.5);
    // Menampilkan isi linked list
    Node *current = head;
    printf("Isi Linked List:\n");
    while (current != NULL)
    {
        printf("x: %d, y: %.2f\n", current->x, current->y);
        current = current->next;
    }

    current = head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    // free(root.next->next);
    // free(root.next);

    return 0;
}
