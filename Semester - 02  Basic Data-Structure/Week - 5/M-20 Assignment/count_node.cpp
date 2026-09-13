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

int count_nodes(Node* root){

    if(root == NULL) return 0 ;

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return 1+l+r;

}

int leaf_nodes (Node* root){

    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL){ //base case is most importent
        return 1;
    }
    
    int l = leaf_nodes(root->left);
    int r = leaf_nodes(root->right);

    return l+r;

}

int max_hight (Node* root){

    if(root == NULL) return 0;
    
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    int l = max_hight(root->left);
    int r = max_hight(root->right);

    return max(l,r)+1;    
}
int main() {

    Node *root = Input_binary_tree();

    cout << "Total Node :" << count_nodes(root) << endl;
    cout << "leaf Node  :" << leaf_nodes(root) << endl;
    cout << "Max Hight  :" << max_hight(root) << endl;


    Print_level_order(root);
}