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

class myQueue{
public :
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int value){
        Node* New_node = new Node (value);
        sz ++ ;
        if(head == NULL){
            head = New_node ;
            tail = New_node ;
        }

        tail->next = New_node;
        tail = New_node;
    }

    void pop(){
        //delete at head 
        sz -- ;
       Node*  Delete_node = head ;
       head = head->next ; 
       delete Delete_node ; 

       if(head == NULL){
        tail = NULL;
        return;
       }
    }

    int front(){
        return head->value ;
    }

    int back(){
        return tail->value ;
    }

    int size(){
        return this->sz ;
    }

    bool empty(){
        return head == NULL ;
    }
};

int main() {

    myQueue q;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value ;
        q.push(value);
    }


   
   // cout<<q.front()<<" "<<q.back()<<" "<<q.size();

   while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
   }

    return 0;

    
    
}