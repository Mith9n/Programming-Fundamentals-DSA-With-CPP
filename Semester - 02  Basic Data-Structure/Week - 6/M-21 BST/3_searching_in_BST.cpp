#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* Input_binary_tree(Node* root) {
    int value;
    cin >> value;

    if (value == -1)
        return NULL; // return; এর পরিবর্তে return NULL;

    root = new Node(value);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* left_Node, * right_Node;

        if (l == -1) left_Node = NULL;
        else left_Node = new Node(l);

        if (r == -1) right_Node = NULL;
        else right_Node = new Node(r);

        //linking
        p->left = left_Node;
        p->right = right_Node;

        // push child node in queue
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right); 
    }

    return root;
}

bool search_in_BST(Node*& root, int search_value) {
    if(root == NULL)
        return false ;
    if(root->value == search_value)
        return true ;
    
    if(root->value < search_value){

        return search_in_BST(root->left,search_value);

    }else return  search_in_BST(root->right,search_value);
    
}

void Print_level_oder(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();
        cout << p->value << " ";
        //push child
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
}

int main() {
    Node* root = Input_binary_tree(NULL); // NULL পাস করতে হবে।
    int search_value;
    cin >> search_value;
   if (search_in_BST(root, search_value)){ 

    cout<<"Found !";
   }else cout<<"Not found !";
   // Print_level_oder(root);
}
