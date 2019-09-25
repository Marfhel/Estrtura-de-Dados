#include <stdio.h>
#define STACK_SIZE 6

struct stack
{
    int itens[STACK_SIZE];
    int top;
};

typedef struct stack Stack;
Stack __stack__()
{
    Stack stack;
    stack.top = -1;

    return stack;
}
int pop (Stack *stack)
{
    // stack->top--;
    return stack->itens[stack->top--];
}

int main (){

    Stack my_stack = __stack__();
    for (int item=0; item < STACK_SIZE; item++){

        my_stack.itens[item] = item * 10 + 1;
        my_stack.top = item;
    }

    for (int item = 0; item < STACK_SIZE; item++)
    {
        printf("Valor removido %d\n", pop(&my_stack));
    }

    return 0;
}