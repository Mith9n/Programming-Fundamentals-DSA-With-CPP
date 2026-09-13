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

void sort_linked_list (Node* head){  

    for(Node* i = head ; i->next != NULL ; i = i->next){
        for( Node* j = i->next ; j != NULL; j = j->next){
            if(i->value > j->value){
                swap(i->value , j->value);
            }
        }
    }

   

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
        sort_linked_list(head);
        print_list_value (head);
}