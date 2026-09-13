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

void Insert_any_position (Node* head,int index,int value){
    Node* New_node = new Node( value);
    Node* temp = head ;
          
          for(int i=0;i<index-1;i++){
            temp = temp->next ;
          }

          New_node->next = temp->next ;
          temp->next = New_node;

    }


void print_the_value (Node* head){

    Node* temp = head ;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(40);
    Node* tail = new Node(50);

    //linking 
    head->next = a ;
    a->next = b ;
    b->next = tail;

    Insert_any_position(head,2,30);
    print_the_value(head);

}