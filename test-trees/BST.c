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

void inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int isBST(struct node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }else{
        return 1;
    }
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

printf("\nThe inorder of this BT is: ");
    inorder(p);
printf("\n Function for is bst or not!:  ");    
    printf("%d",isBST(p));

return 0;
}