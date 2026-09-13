#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_binary_tree() {
    int value;
    cin >> value;

    Node* root;
    if (value == -1) 
        root = NULL;
    else 
        root = new Node(value);

    queue<Node*> q;

    if (root != NULL) 
        q.push(root);

    while (!q.empty()) {
        Node* parent = q.front();
        q.pop();

        // Input values for left and right child
        int l, r;
        cin >> l >> r;

        Node* leftNode, * rightNode;

        if (l == -1) 
            leftNode = NULL;
        else 
            leftNode = new Node(l);

        if (r == -1) 
            rightNode = NULL;
        else 
            rightNode = new Node(r);

        // Linking left and right nodes
        parent->left = leftNode;
        parent->right = rightNode;

        // Push child nodes into the queue
        if (parent->left) 
            q.push(parent->left);
        if (parent->right) 
            q.push(parent->right);
    }

    return root;
}

void print_level_order(Node* root) {
    if (root == NULL) 
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        // Get the front node
        Node* parent = q.front();
        q.pop();

        // Print the value of the current node
        cout << parent->value << " ";

        // Push child nodes
        if (parent->left) 
            q.push(parent->left);
        if (parent->right) 
            q.push(parent->right);
    }
}

int main() {
    Node* first = input_binary_tree();
    print_level_order(first);
}
