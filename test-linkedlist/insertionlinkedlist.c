#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr -> next;
    }printf("\n");
}

struct node *insertatfirst(struct node *head, int data){
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr -> next = head;
        ptr -> data = data;
        return ptr;
}

struct node * insertatindex(struct node *head, int data,int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = data;
    struct node *p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertatend(struct node *head, int data){
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr -> data = data;
        struct node *p = head;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;

        return head;
}

struct node *insertafternode(struct node *head,struct node *prevnode, int data){
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr -> data = data;

        ptr -> next = prevnode->next;
        prevnode -> next = ptr;
        return head;
}

int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second ->data = 20;
    second->next = third;

    third -> data = 30;
    third ->next = fourth;

    fourth -> data = 40;
    fourth -> next = NULL;

    printf("linked list before insertion\n");
    traversal(head);
    
    printf("\nlinked list after insertion\n");
    //head =  insertatfirst(head,5);
    //head =  insertatindex(head,5,1);
    //head =  insertatend(head,5);
    
    head = insertafternode(head,third,25);
    traversal(head);

    return 0;
}