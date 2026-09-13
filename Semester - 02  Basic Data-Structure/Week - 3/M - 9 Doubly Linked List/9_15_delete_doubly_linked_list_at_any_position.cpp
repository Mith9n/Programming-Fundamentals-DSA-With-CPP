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

void delete_at_any_position(Node* head,int index){
    Node* temp = head ;
    for(int i=1;i<index;i++){
        temp = temp->next;
    }

    Node* delete_node = temp->next;
    temp->next = temp->next->next;
    


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

    delete_at_any_position(head,2);
    printing_forward_value (head);
  

}