#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main() {

    // Note : Linked list have no index 

    Node* head = new Node (10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node (40);

    head->next = a;
    a->next = b;
    b->next = c;

  
    // Manual Traversal

    cout<<head->value<<endl;
    cout<<head->next->value<<endl;
    cout<<head->next->next->value<<endl;
    cout<<head->next->next->next->value<<endl;

    // Traversing using loop 
    
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->value<<endl;
        temp = temp->next ;
    }


}