#include <stdio.h>              //Q14. Palindrome number or not
#include <stdlib.h>             //RA2011026010201       Syed Faizan Fiaz
typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}node;

node *createlinkedlist(int n){
    int i = 0;
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;
    for(i=0; i<n; i++){
        temp = (node *)malloc(sizeof(node));
        scanf("%d",&(temp->data));
        temp->next = NULL;
        
        if(head == NULL){
            head = temp;
        }else{
            p = head;
            while(p->next !=NULL)
                p = p->next;
            p->next = temp;
            
        }
    }
    return head;
}

void palindrome(node *ptr1,node *ptr2,int n){
    while(ptr2->next!=NULL){
        ptr2 = ptr2->next;
    }
    int a = n/2;
    while(a--){
        if(ptr1->data == ptr2->data){
            printf("Yes");
            ptr1 = ptr1->next;
            ptr2 = ptr2->prev;
        }else printf("No");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    node *HEAD = NULL;
    HEAD = createlinkedlist(n);
    
    palindrome(HEAD,HEAD,n);
    return 0;
}