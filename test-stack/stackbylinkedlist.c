#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
}; 

void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct node *top){
    if(top == NULL){
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct node *top){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node * push(struct node *top,int x){
    struct node *n =(struct node *)malloc(sizeof(struct node));
    if(n == NULL) printf("The stack has overflown");
    else{
        n->data = x;
        n->next = top;
        top = n;
    }
    return top;
}

int pop(struct node **top){
    if(isEmpty(*top)){
        printf("The stack is underflown");
    }
    else{
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
    return 0;
}

int main(){
    struct node *top = NULL;
    top = push(top,50);
    top = push(top,100);
    top = push(top,150);
    top = push(top,200);
    top = push(top,250);
    top = push(top,300);
    int element = pop(&top);
    printf("The popped element is : %d\n", element);
    traversal(top);
    
    return 0;
}