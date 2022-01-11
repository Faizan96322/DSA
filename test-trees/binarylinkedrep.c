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

void preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
   /* struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 2;
    p2->left = NULL;
    p2->right = NULL;
    */
    struct node *p = createnode(2);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(8);
    struct node *p3 = createnode(3);
    struct node *p4 = createnode(7);
   
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
printf("The preorder of this BT is: ");
    preorder(p);
printf("\nThe postorder of this BT is: ");
    postorder(p);
printf("\nThe inorder of this BT is: ");
    inorder(p);

return 0;
}