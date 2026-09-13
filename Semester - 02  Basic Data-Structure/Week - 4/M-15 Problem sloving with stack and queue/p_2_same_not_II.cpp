#include <bits/stdc++.h>
using namespace std;

class Node{
public :
    int value ;
    Node* next ;
    Node* previous ;

    Node(int value){
        this->value = value ;
        this->next = NULL;
        this->previous = NULL;
    }
};

class myStack {
public :
     Node* head = NULL;
     Node* tail  = NULL;

    int sz = 0;

    void push (int value){
        sz++;
        Node* New_node = new Node(value);
        if(head = NULL){
            tail = NULL;
        }else {
            tail->next = New_node;
            New_node->previous = tail ;
            tail = New_node ;
        }
    }

    void pop(){
        sz--;
       Node* Deleteded_Node = tail ;
       tail->previous = tail ;
       delete Deleteded_Node ;
       if(tail = NULL){
            head = tail ;
       }else tail->next = NULL;
    }

    int top(){
        return tail->value;
    }

    int size(){
        return sz;
    }
    
    bool empty(){
        return head = NULL;
    }

};





int main() {

    myStack st ;

    int n , m ;
    cin >> n >> m;

    for(int i =0;i<n;i++){
        int value ;
        cin>>value ;
        st.push(value);
    }


    
    
}