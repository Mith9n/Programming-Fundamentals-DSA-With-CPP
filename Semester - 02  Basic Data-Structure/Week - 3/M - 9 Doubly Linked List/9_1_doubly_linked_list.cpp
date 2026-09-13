#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int value;
    Node *next;
     Node *previous;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->previous = NULL;
    }
};

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node (30);

    //linking nodes 

    head->next = a;
    a->previous = head ;

    a->next = tail;
    tail->previous = a ;

}