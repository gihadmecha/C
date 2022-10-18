#include "stack.h"

STACK stackCreate (signed int stackSize)
{
    STACK stack = (STACK) malloc (sizeof(stack_t));

    if (stack == NULLPTR)
        return 0;

    stack->size = stackSize;
    stack->stack = (signed int*) malloc (stackSize * sizeof(signed int));
    stack->sp = 0;

    return stack;
}

stack_status push (STACK stack, signed int data)
{
    if (stack == NULLPTR)
        return STACK_NOTCREATED;

    stack_status status = STACK_FULL;

    if (stack->sp < stack->size)
    {
        stack->stack[stack->sp] = data;
        stack->sp++;
        status = STACK_DONE;
    }

    return status;
}

stack_status pop (STACK stack, signed int* pdata)
{
    if (stack == NULLPTR)
        return STACK_NOTCREATED;

    stack_status status = STACK_EMPTY;

    if (stack->sp > 0)
    {
        stack->sp--;
        *pdata = stack->stack[stack->sp];
        status = STACK_DONE;
    }

    return status;
}

void stackDelete (STACK stack)
{
    if (stack == NULLPTR)
        return STACK_NOTCREATED;

    free (stack->stack);
    free (stack);
}