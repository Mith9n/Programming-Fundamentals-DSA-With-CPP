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

void Node_Insert(Node*& root, int inserted_value) {
    if (root == NULL) {
        root = new Node(inserted_value);
        return; // নতুন নোড তৈরি হলে return করতে হবে।
    }
    if (inserted_value < root->value) {
        if (root->left == NULL) {
            root->left = new Node(inserted_value);
        }
        else Node_Insert(root->left, inserted_value);
    }
    else {
        if (root->right == NULL) {
            root->right = new Node(inserted_value);
        }
        else Node_Insert(root->right, inserted_value);
    }
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
    int inserted_value;
    cin >> inserted_value;
    Node_Insert(root, inserted_value);
    Print_level_oder(root);
}
