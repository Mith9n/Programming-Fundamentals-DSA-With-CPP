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

Node* input_binary_tree(){
    int value ;
    cin >> value ;

    Node* root ;

    if( value == -1) root = NULL;
    else root = new Node ( value);

    queue <Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* current = q.front();
        q.pop();

        int r , l ;
        cin >> r >> l ;

        Node* leftNode , *rightNode ;

        if(l == -1) leftNode = NULL;
        else leftNode = new Node (l);

        if(r == -1) rightNode = NULL;
        else rightNode = new Node (r);

        // linking 

        current->left = leftNode;
        current->right = rightNode;

        // queue e push laft or right valu ;

        if(current->left) q.push(current->left);
        if(current->right) q.push (current->right) ;
        
    }
    return root ;
}

int level_order_print(Node* root){
    if(root == NULL) return 0;

    int count =0;
    queue <Node*> q;
  
    q.push(root);
    while(!q.empty()){
        count ++;
        Node * parent = q.front();
        q.pop();

        cout<<parent->value <<" ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }

    return count;

}

int main() {

  Node* root = input_binary_tree();
  int count = level_order_print(root);  

  cout<<endl<<count;

    
    
}