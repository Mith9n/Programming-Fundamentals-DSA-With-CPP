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

Node* Input_binary_tree (){
    
    int value ;
    cin >> value ;

    Node* root ;

    if(value == -1) root = NULL ;
    else root = new Node (value);

    queue <Node*> q;
    q.push ( root );

    while( !q.empty()){
        
        Node* p = q.front();
        q.pop();

        int l , r ;
        cin>> l >> r ;

        Node* left_node ,*right_node ;

        if( l == -1 ) left_node = NULL ;
        else left_node = new Node ( l );

        if( r == -1) right_node = NULL;
        else right_node = new Node ( r );

        // linking 

        p->left = left_node ;
        p->right = right_node ;

        // pushing node in queue ;

        if(p->left != NULL) q.push(left_node);
        if(p->right != NULL) q.push(right_node);


    }

    return root ;

}

void Print_level_order(Node* root){

        if( root == NULL) {
            cout<<" Root nei , faka";
            return ;
        }

        queue <Node*> q;
        q.push(root);

        while(!q.empty()){
            //ber kore ana
            Node*  p = q.front();
            q.pop();

            //print kora
            cout<<p->value <<" ";

            //node gula push kora 

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);


        }

}

int main() {
    
  Node* root =  Input_binary_tree();

  Print_level_order(root);



    
}