#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int new_data) {
        data = new_data;
        next = prev = nullptr;
    }
};

Node* insertAtPosition(Node* head, int pos, int new_data) {
    Node* new_node = new Node(new_data);

    if (pos == 1) {
        new_node->next = head;
        if (head != nullptr) {
            head->prev = new_node;
        }
        return new_node; // New head
    }

    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }

    if (curr == nullptr) {
        cout << "Position is out of bounds." << endl;
        delete new_node;
        return head;
    }

    new_node->next = curr->next;
    new_node->prev = curr;
    curr->next = new_node;

    if (new_node->next != nullptr) {
        new_node->next->prev = new_node;
    }

    return head;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    cout << "Original Linked List: ";
    printList(head);

    head = insertAtPosition(head, 3, 3);
    cout << "Updated Linked List: ";
    printList(head);

    return 0;
}