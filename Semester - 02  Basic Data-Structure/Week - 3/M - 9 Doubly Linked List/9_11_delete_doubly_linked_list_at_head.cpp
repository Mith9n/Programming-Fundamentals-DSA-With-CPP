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

void delete_at_head(Node* &head,Node* &tail){
    
    Node* delete_node = head;
    head = head->next;
    // optimize
    delete delete_node;
    if(head == NULL){
        tail = NULL;
        return ;
    }
    head->previous = NULL;    
}

void printing_forward_value (Node* head){
    Node* temp = head ;
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node (30);

    //linking nodes 

    head->next = a;
    a->previous = head ;

    a->next = tail;
    tail->previous = a ;

    delete_at_head(head,tail);
    printing_forward_value (head);
  

}