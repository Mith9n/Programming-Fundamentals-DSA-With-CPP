#include <bits/stdc++.h>
using namespace std ;

class Node{
public :
    int value ;
    Node* next;

    //constructor 

    Node(int value){
        this->value = value ;
        this->next = NULL;
    }
};

void insert_at_tail (Node* &head,int value){
    Node* New_node = new Node(value);
    Node* temp = head;

    if(head == NULL){
        head = New_node;
        return ;
    }

    while(temp->next != NULL){      
        temp = temp->next ;
    }
    temp->next = New_node ;
}

void print_the_linked_list(Node* head){
    Node* temp = head ;
    while (temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    
}

int main (){

     Node* head = NULL;
   /* Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);*/

    //linking 

    /*head->next =  a;
    a->next = b ;
    b->next = tail;*/

    insert_at_tail (head,50);

    print_the_linked_list(head);

}