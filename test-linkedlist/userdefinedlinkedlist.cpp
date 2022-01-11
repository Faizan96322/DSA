#include <assert.h>
#include <iostream>12
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void displaylist(Node *head){
    Node * p = head;
    cout<<"Linked list:->";
    while(p != NULL){
        
        cout<<p->data<<"->";
        
        p = p->next;
    }
}

int main()
{

    Node* head = NULL;
    int n;cin>>n;
    int data;
    while(n--){
        cin>>data;
        push(head,data);
    }
    displaylist(head);
    return 0;
}

