#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node* previous ;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->previous = NULL;
    }
};

class myStack {
public :

    Node* head = NULL;
    Node* tail = NULL;
    int sz =0;

    void push(int value){ // O(1)
      sz++;
      Node* New_node = new Node (value);
      if(head == NULL){
        head = New_node;
        tail = New_node;
      }else{
        tail->next = New_node;
        New_node->previous = tail;
        tail = New_node ;
      }       
    }

    void pop(){ // O(1)
      sz--;
      Node* Delete_Node = tail ;
      tail = tail->previous;
      delete Delete_Node ;

      if( tail == NULL){
         head = NULL ;
      }else {
        tail->next = NULL ;
      }
    
    }

    int top(){ // O(1)
      return tail->value ;

    }

    int size() { // O(1)
      return sz ;
     
    }

    bool empty(){ // O(1)
        return head == NULL;
    }

};

int main() {

  myStack st; // static object
  int n;
  cin >> n;

  // input
  for (int i = 0; i < n; i++)
  {
    int x;
    cin>>x;
    st.push(x);
 }

// print 
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

}


