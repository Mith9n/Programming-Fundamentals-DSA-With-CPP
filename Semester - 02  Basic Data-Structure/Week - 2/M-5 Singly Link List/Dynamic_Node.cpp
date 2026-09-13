// dynamic node using function ..
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

    // assign Node.
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);

    // connection the next Node..  // head -> a -> b
    head->next = a;
    a->next = b;

  

    // print values ...
    cout<<head->value<<" ";
    cout<<head->next->value <<" ";
    cout<<head->next->next->value<<endl;
    
}