#include <iostream>
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
    addNode(&s->_top, element);
}

int pop(Stack* s)
{
    if (isEmpty(s))
    {
        return -1;
    }

    return removeNode(&s->_top);
}

void initStack(Stack* s)
{
    s->_top = nullptr;
}

void cleanStack(Stack* s)
{
    cleanList(&s->_top);
}

bool isEmpty(Stack* s)
{
    return s->_top == nullptr;
}

bool isFull(Stack* s)
{
    return false;
}