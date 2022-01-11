#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
}

struct node *firstnodedel(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *delatindex(struct node *head,int index){
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p -> next;
        q = q -> next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *dellastnode(struct node *head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next!=NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    p->next =NULL;
    free(q);
    return head;    
}

struct node *delval(struct node *head,int val){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data != val && q->next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    if(q->data == val)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 20;
    head->next = second;
    
    second->data = 40;
    second->next = third;
    
    third->data = 60;
    third->next = fourth;

    fourth->data = 80;
    fourth->next = NULL;

    printf("Linked list before deletion function:\n");
    traversal(head);

    printf("\nLInked list after deletion function:\n");
    //head = firstnodedel(head);
    //head = delatindex(head,2);
    //head = dellastnode(head);
    //head = dellastnode(head);
    head = delval(head,100);
    traversal(head);


return 0;
}