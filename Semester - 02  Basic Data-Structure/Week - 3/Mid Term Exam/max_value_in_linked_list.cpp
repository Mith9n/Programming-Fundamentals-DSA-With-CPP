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

void insert_at_tail (Node* &head,Node* &tail,int value){
    Node* New_node = new Node (head);
    if(head == NULL){
        head = New_node;
        tail = New_node;
    }else {
        tail->next = New_node;
        tail = New_node ;
    }


}

int find_max_value(Node* head){
    
}


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int value ;

    while(true){
        cin>>value ;
        if(value == -1){
            break;
        }
        insert_at_tail(head,tail,value);
    }

    find_max_value(head);

    
}