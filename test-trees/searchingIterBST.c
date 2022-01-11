#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node* createnode(int data){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *searchIter(struct node * root, int key){
    while(root!=NULL){
        if(root->data == key){
            return root;
        }
        else if(key<root->data){
        root = root->left;
        }
        else{
            root = root->right;
        }
    }    
    return NULL;
}

int main(){

    struct node *p = createnode(12);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(15);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(5);
   
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct node * n = searchIter(p,3);
    if(n!=NULL){
    printf("Found: %d ",n->data);
    }else{
    printf("Element not found");
    }

return 0;
}