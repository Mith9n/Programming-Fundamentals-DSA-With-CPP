#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node *previous ;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->previous = NULL;
    }
};

class mystack {
public :
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int value){
            sz++;
            Node* New_node = new Node(value);
            if(head == NULL){
                head = New_node ;
                tail = New_node ;
            }else{
                tail->next = New_node;
                New_node->previous = tail ;
                tail = New_node ;

            }
        }

        void pop(){
            sz--;
            Node* Delete_Node = tail ;
            tail = tail->previous ;
            delete Delete_Node ;

            if(tail == NULL){
                head = NULL;
            }else{
                tail->next = NULL;
            }

        }

        int top(){
            return tail->value;
        }

        int size(){
            return sz;
        }

        bool empty(){
            return head == NULL;
        }
  };

int main() {

    mystack st1;
    mystack st2;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int val ;
       cin>>val;
        st1.push(val);
    }


    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        int val ;
        cin>>val;
        st2.push(val);
    }

    if(st1.size() == st2.size()){
        int isEqual = true ;
        while( !st1.empty() && !st2.empty() ){
            if(st1.top() != st2.top()){
                isEqual = false ;
                  break;
            }
            st1.pop();st2.pop();
        }
        if(isEqual) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }else cout<<"NO"<<endl;

}