#include <iostream>
#include "node.h"

using namespace std;

int main(){
    
    Node* head = nullptr;       //Create empty list
    cout << "Enter how many numbers: ";
    int n,x;
    cin >> n;
    cout << "\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << i+1 << ". Number: ";
        cin >> x;
        cout << "\n";
        insert(&head, x);
        print(head);
        cout << "\n";
        
    }
    
    return 0;
}