#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head1=(struct node *)malloc(sizeof(struct node));
    struct node *head2=(struct node *)malloc(sizeof(struct node));
    struct node *second1=(struct node *)malloc(sizeof(struct node));
    struct node *second2=(struct node *)malloc(sizeof(struct node));
    struct node *third1=(struct node *)malloc(sizeof(struct node));
    struct node *third2=(struct node *)malloc(sizeof(struct node));

    head1->data = 8;           head2->data = 1;
    head1->next = second1;      head2->next = second2;

    second1->data = 7;         second2->data = 0;
    second1->next = third1;     second2->next = third2;

    third1->data = 2;          third2->data = 2;
    third1->next = NULL;        third2->next = NULL;

    traversal(head1);
    traversal(head2);
    return 0;
}