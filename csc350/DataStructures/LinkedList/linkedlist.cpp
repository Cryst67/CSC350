#include <iostream>
#include "node.h"

using namespace std;

Node *head = nullptr;

void insert(Node** head, int x){
    Node* temp = new Node;
    temp->data = x;
    if(*head != nullptr) temp->next = *head;
    *head = temp;

}

void print(Node* head){
    Node* temp = head;
    cout << "List: \n"; 
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}