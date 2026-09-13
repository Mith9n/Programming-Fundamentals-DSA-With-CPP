#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string address;
    Node* prev;
    Node* next;

    Node(string address) {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void Insert_at_tail(Node* &head, Node* &tail, string &addr) {
    Node* New_node = new Node(addr);
    if (head == NULL) {
        head = tail = New_node;
    } else {
        tail->next = New_node;
        New_node->prev = tail;
        tail = New_node;
    }
}

Node* Find_Node(Node* head,string &addr) {
    
    while (head) {
        if (head->address == addr) {
            return head;
        }
        head = head->next;
    }
    
    return NULL;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* current = NULL;

    string address;
    
    while (cin >> address && address !="end") {
        Insert_at_tail(head, tail, address);
    }

    int q;
    cin >> q;
    cin.ignore();

    string command;
    while (q--) {
        
        getline(cin, command);

        if (command.find("visit ") == 0) {
            string target = command;
            target.erase(0,6); 

            Node* found = Find_Node(head, target);
            if (found) {
                current = found;
                cout <<current->address <<endl;
            } else {
                cout <<"Not Available" <<endl;
            }
        } else if (command=="next") {
            if (current && current->next) {
                current = current->next;
                cout <<current->address <<endl;
            } else {
                cout <<"Not Available"<<endl;
            }
        } else if (command == "prev") {
            if (current && current->prev) {
                current = current->prev;
                cout <<current->address <<endl;
            } else {
                cout <<"Not Available" <<endl;
            }
        }
    }

    return 0;
}
