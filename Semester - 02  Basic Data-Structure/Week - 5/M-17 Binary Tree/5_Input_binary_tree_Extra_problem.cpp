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

// Function to input a binary tree
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
        Node* parent_Node = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* leftNode = (l == -1) ? NULL : new Node(l);
        Node* rightNode = (r == -1) ? NULL : new Node(r);

        // Linking
        parent_Node->left = leftNode;
        parent_Node->right = rightNode;

        // Push child nodes into the queue
        if (parent_Node->left)
            q.push(parent_Node->left);
        if (parent_Node->right)
            q.push(parent_Node->right);
    }

    return root;
}

// Pre-order traversal of the binary tree
void Preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->value << " ";  // Process the current node
    Preorder(root->left);       // Recur on the left subtree
    Preorder(root->right);      // Recur on the right subtree
}

int main() {

    Node* root = input_binary_tree(); // Input the tree
    cout << "Pre-order traversal: ";
    Preorder(root); // Perform pre-order traversal

    

}
