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
void Insert_at_tail(Node* &head,Node* &tail,int value){
    
    Node* New_node = new Node(value);
    if(head == NULL){
        head = New_node;
        tail = New_node;
    }else{
        tail->next = New_node;
        tail = New_node;       
    }
    
}

void delete_at_any_position (Node* head,int index){
    Node* temp = head ;
    for(int i=0;i<index-1;i++){
        temp = temp->next; // iterator
    }

    Node* Delete_Node = temp->next ;
    temp->next = temp->next->next;
    delete Delete_Node;

}



void print_list_value (Node* head){

    Node* temp = head ;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;

    }
    
}

int main() {

        Node* head = NULL;
        Node* tail = NULL;

        int value ;
        while(true){
            cin>>value;
            if(value == -1){
                break;
            }
            Insert_at_tail(head,tail,value);
        }
        int index ; cin>> index ;
        delete_at_any_position(head,index);
        print_list_value (head);
}