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

Node* Input_binary_Tree(){

        int value ;
        cin >> value ;

        Node* root ;

        if(value == -1)  root == NULL;

        else root = new Node (value);

        queue<Node*>q;

        if(root != NULL){
            q.push(root);
        }

        while(!q.empty()){

            Node* p = q.front();
            q.pop();

            int l , r;
            cin >> l >> r ;

            Node* leftNode , *rightNode ;

            if( l== -1 ) leftNode = NULL ;
            else leftNode = new Node (l);

            if( r == -1) rightNode = NULL ;
            else rightNode = new Node (r);

            //linking 

            p->left = leftNode ;
            p->right = rightNode ;

            if(p->left) q.push(leftNode);
            if(p->right) q.push (rightNode);

        }
    return root ;
}

void print_lever_order(Node* root){

    if(root == NULL) return ;
    queue<Node*>q; 
    q.push(root);

    while(!q.empty()){

        Node* p = q.front();
        q.pop();

        cout<<p->value <<" ";

        if(p->left !=NULL) q.push(p->left);
        if(p->right !=nullptr) q.push (p->right);
    }

}

int main() {

   Node* root = Input_binary_Tree();
   print_lever_order (root);
    
}