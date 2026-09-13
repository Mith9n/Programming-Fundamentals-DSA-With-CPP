#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node* previous;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->previous = NULL;
        
    }
};

void Insert_at_tail (Node* &head,Node* &tail,int value){

   Node* New_node = new Node(value);
    Node* temp = New_node ;

    while(temp == NULL){
        head = New_node;
        tail = New_node;
    }

    tail->next = New_node ;
    New_node->previous = tail;
    tail = New_node ;
}

void print_at_tail(Node* head){
    Node* temp = head ;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node (30);
    Node* tail = new Node (40);

    //linking nodes ;

    head->next = a ;
    a->previous = head ;

    a->next = b;
    b->previous = a;

    b->next = tail ;
    tail->previous = b ;

    Insert_at_tail (head,tail,55);
    print_at_tail(head);

}