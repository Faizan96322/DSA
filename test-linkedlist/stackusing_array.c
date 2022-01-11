#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int main()
{

    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    //s.arr = (int *)malloc(s.size*sizeof(int));
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s -> arr[0] = 5;
    s -> top++;

    if (isempty(s))
    {
        printf("The stack is empty");
    }
    else
        printf("The stack is not empty");
    
    
    //isempty(s);
    //isfull(s);
    return 0;
}