#include <iostream>
using namespace std;

// Node structure for the doubly linked list
class Node {
    int data;
    Node* prev;
    Node* next;


    Node(int value){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to print the list from left to right
void printLeftToRight(Node* head) {
    cout << "L -> ";
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to print the list from right to left
void printRightToLeft(Node* tail) {
    cout << "R -> ";
    Node* temp = tail;
    while (temp) {
        cout << temp->data;
        if (temp->prev) cout << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {



    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        Node* newNode = new Node(V);

        if (X == 0) { // Insert at the head
            if (!head) {
                head = tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        } else {
            Node* temp = head;
            int idx = 0;
            while (temp && idx < X - 1) {
                temp = temp->next;
                idx++;
            }

            if (!temp || (X > 0 && !head)) {
                cout << "Invalid" << endl;
                delete newNode;
                continue;
            }

            newNode->next = temp->next;
            newNode->prev = temp;

            if (temp->next) {
                temp->next->prev = newNode;
            } else {
                tail = newNode;
            }

            temp->next = newNode;
        }

        printLeftToRight(head);
        printRightToLeft(tail);
    }

    return 0;
}
