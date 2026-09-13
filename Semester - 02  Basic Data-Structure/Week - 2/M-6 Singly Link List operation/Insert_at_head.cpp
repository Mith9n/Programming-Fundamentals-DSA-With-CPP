#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

// Node* = holo pointer ja node er address hold kore rakhe ..
//&head এর মানে রেফারেন্স পাস করা।
//রেফারেন্স ব্যবহার করার ফলে, আমরা মূল head পয়েন্টারের মানকে সরাসরি পরিবর্তন করতে পারি।

void insert_at_head(Node* &head,int value){ // note : use pointer reference 
    Node* new_Node = new Node (value);
    new_Node->next = head ;
    head = new_Node ; 
}

void print_linked_list(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<endl;
        temp = temp->next ;
    }
}

int main() {  // Node assign 
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    // Node connection // head.next = &a ( head er next e a node er address rakha holo)..
    head->next = a;
    a->next = b;
    // head holo node er address and 100- value (or node value);
    insert_at_head(head,100); // function argument

    print_linked_list(head);



}
/*যদি তুমি নতুন কোনো নোড যুক্ত করে সেটিকে লিস্টের প্রথমে আনতে চাও, তাহলে শুধু new_Node->next = head করলে হবে না। কারণ, এতে new_Node যুক্ত হবে, কিন্তু head তখনো পুরনো নোডে থাকবে।
head = new_Node; করার মাধ্যমে তুমি লিঙ্কড লিস্টের এন্ট্রি পয়েন্ট আপডেট করছো, যাতে নতুন নোড লিস্টের প্রথম নোড হিসেবে কাজ করে।*/