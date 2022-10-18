#include <stdio.h>
#include <stdlib.h>

#define NULLPTR ((void*)0)

typedef struct stack
{
    signed int* stack;
    signed int size;
    signed int sp;
}stack_t;

typedef stack_t* STACK;

typedef enum{
    STACK_FULL = 0, 
    STACK_EMPTY = 0,
    STACK_DONE,
    STACK_NOTCREATED
}stack_status;

STACK stackCreate (signed int stackSize);
stack_status push (STACK stack, signed int data);
stack_status pop (STACK stack, signed int* pdata);
void stackDelete (STACK stack);