#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
    int _data;
    Node* _next;
} Node;

void addNode(Node** head, int value);
int removeNode(Node** head);
void cleanList(Node** head);
bool isEmpty(Node* head);

#endif