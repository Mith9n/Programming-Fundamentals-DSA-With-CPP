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

void insert_at_head(Node* &head,Node* &tail,int value){
    Node* New_node = new Node (value);
    
    if(head == NULL){
        head = New_node;
        tail = New_node;
        return ;
    }

    New_node->next = head; // New_node er moddhe head er address rakhlam
    head->previous = New_node; // head_previous e new_node er address rakhlam
    head = New_node; // ekn head ta soriya new_node e rakhlam 

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

    insert_at_head(head,tail,100);
    printing_forward_value (head);
  

}