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

void print_using_level_order(Node* root){
    if(root == NULL) return ;
    queue <Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        cout<<p->value <<" ";

        // push child nodes 
        if(p->left) q.push(p->left);
        if(p->right)q.push(p->right);
    }

}

Node* convert_arr_to_BST(int arr[],int n ,int l,int r){
    if(l>r) return NULL ;         
    int mid = (l+r)/2 ;
    Node* root = new Node (arr[mid]) ;// mid er value ;
    Node* left_root = convert_arr_to_BST(arr,n,l,mid-1);
    Node* right_root = convert_arr_to_BST (arr,n,mid+1,r);
    root->left = left_root;
    root->right =right_root ;
    return root ;
}
int main() {

    int n;
    cin >> n;

    int arr[n];
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Node* root = convert_arr_to_BST(arr,n,0,n-1);
    print_using_level_order(root);
    return 0;
    
}     