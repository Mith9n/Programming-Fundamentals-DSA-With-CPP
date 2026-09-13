#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right ;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_the_tree (Node* root){
    int value ;
    cin >> value ;
    if( value == -1) root = NULL ;
    else root = new Node (value);

    queue <Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* p = q.front();
        q.pop();

        int l,r ;
        cin >> l >>  r ;

        Node* left_Node , *right_Node ;

        if( l == -1 ) left_Node = NULL ;
        else left_Node = new Node (l);

         if( r == -1 ) right_Node = NULL ;
        else right_Node = new Node (r);


    }

}

bool search_value (Node* root,value){

}

int main() {
       input_the_tree();

}