#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1)return 1;

    return 0;
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int val,struct stack *ptr){
    if(isFull(ptr)){
        printf("\nThe stack has overflown");
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("\nThe stack has underflown");
        return -1;
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *s,int i){
    if(s->top -i +1 < 0){printf("Invalid position");return -1;}
    else return s->arr[s->top -i +1];
}

int main(){
    //struct stack s;
    //s.size = 80;
    //s.top = -1;
    //s.arr = (int *)malloc(sizeof(int)*s.size);

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int)*s->size);

    s->arr[0] = 50;
    s->top++;

    if(isEmpty(s)) printf("\nThe stack is empty");
    else printf("\nThe stack is not empty  \n");

    push(100,s);

    for(int i = 0;i<2;i++){
        printf("\nThe stack is: %d ",s->arr[i]);
    }


    printf("%d popped element: \n", pop(s));

    for (int i = 0; i < s->top +1; i++)
    {
        printf("The position of %d is %d : \n",i,peek(s,i));
    }
    

    return 0;
}