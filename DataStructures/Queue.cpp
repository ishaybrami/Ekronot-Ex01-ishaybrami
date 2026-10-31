#include <iostream>
#include "Queue.h"


void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        return;
    }

    q->_elements[q->_count] = newValue;
    q->_count++;
}


int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    int firstValue = q->_elements[0];
    for (int i = 0; i < q->_count - 1; i++)
    {
        q->_elements[i] = q->_elements[i + 1];
    }

    q->_count--;
    return firstValue;
}


void initQueue(Queue* q, unsigned int size)
{
    q->_elements = new int[size];
    q->_maxSize = size;
    q->_count = 0;
}


void cleanQueue(Queue* q)
{
    delete[] q->_elements;
    q->_elements = nullptr;
    q->_maxSize = 0;
    q->_count = 0;
}


bool isEmpty(Queue* s)
{
    return s->_count == 0;
}


bool isFull(Queue* s)
{
    return s->_count == s->_maxSize;
}