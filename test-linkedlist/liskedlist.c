#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void structtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = NULL;

    structtraversal(head);

    printf("Hey Faizan your first created linked list ran successfully!!");
    return 0;
}