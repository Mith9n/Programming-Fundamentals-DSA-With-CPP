#include <bits/stdc++.h>
using namespace std;

class Node{
    public :
        int  value ;
        Node* next ;

        Node(int value){
            this->value = value ;
            this->next = NULL;
        }
};

void Insert_at_tail(Node* &head,Node* &tail, int value){
    Node* New_node  = new Node(value);
    if(head == NULL){
        head = New_node ;
        tail = New_node ;
    }else {
        tail->next = New_node ;
        tail = New_node ;
        
    }
}

int List_size(Node* head){
    int size = 0;
    Node* temp = head ;
    while(temp != NULL){
        size++;
        temp = temp->next ;
    }
    return size ;
}

int main() {

        Node*  head = NULL;
        Node* tail = NULL;

        int value ;
        while(true){
            cin>>value ;
            if(value == -1){
                break;
            }
            Insert_at_tail(head,tail,value);
        }

    cout<<List_size(head);   
}