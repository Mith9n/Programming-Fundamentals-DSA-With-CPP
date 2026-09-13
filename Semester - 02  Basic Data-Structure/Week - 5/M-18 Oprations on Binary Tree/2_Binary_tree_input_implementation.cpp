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


Node*  input_tree (){
    
    int value ;
    cin >> value ;

    Node* root ;
    if (value == -1) root = NULL;
    
    else root = new Node (value);

    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        
        Node* p = q.front();
        q.pop();

      
        // 1. root node ber korte hobe ;
        
        int l,r;

        cin >> l >> r ;

        Node* myLeft , *myRight ;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node (l);

        if(r == -1) myRight = NULL ;
        else myRight = new Node (r);

        // connented node 

        p->left = myLeft ;
        p->right = myRight ;


        // push child nodes 
        if(p->left){
            q.push(p->left);
        }

        if(p->right){
            q.push(p->right);
        }
    }

    return root ;
}

void Level_order(Node* root){

    if(root == NULL){
        return ;
    }

    queue<Node*>q ; 
    q.push(root);

    while(!q.empty()){

        //1. 1st node root ber kore neya ;

        Node* f = q.front();
        
        q.pop();

        //2. oi node niye kaj kora ba print kora ;

        cout<<f->value<<" ";

         //3.child node push kora ;

        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);

    }

}

int main() { 

    Node* root = input_tree();
    Level_order (root);
    
}