#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    Node* head = nullptr;
    addNode(&head, 10);
    addNode(&head, 20);
    addNode(&head, 30);
    cout << "First removed: " << removeNode(&head) << endl;
    cout << "Second removed: " << removeNode(&head) << endl;
    addNode(&head, 40);
    cout << "Third removed: " << removeNode(&head) << endl;
    cout << "Fourth removed: " << removeNode(&head) << endl;
    cleanList(&head);
    return 0;
}