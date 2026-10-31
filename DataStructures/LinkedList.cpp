#include "LinkedList.h"

void addNode(Node** head, int value)
{
    if (value <= 0)
    {
        return;
    }

    Node* newNode = new Node;
    newNode->_data = value;
    newNode->_next = *head;
    *head = newNode;
}


int removeNode(Node** head)
{
    if (isEmpty(*head))
    {
        return -1;
    }

    Node* temp = *head;
    int value = temp->_data;
    *head = temp->_next;
    delete temp;
    return value;
}


void cleanList(Node** head)
{
    while (!isEmpty(*head))
    {
        removeNode(head);
    }
}


bool isEmpty(Node* head)
{
    return head == nullptr;
}