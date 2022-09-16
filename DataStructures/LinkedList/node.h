#ifndef NODE_H
#define NODE_H

struct Node
{
    int data;
    Node* next;
};

void insert(Node**, int x);
void print(Node* head);

#endif