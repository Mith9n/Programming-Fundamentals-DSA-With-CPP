/*
What is a Node?
A node typically consists of :
Data: The value stored in the node.
Pointer: A reference to the next node in the linked list.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b, c;
    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    //  Traversal in a Linked List
    // cout<<a.value<<" "<<b.value<<" "<<c.value<<endl;
    cout << a.value << " ";
    cout << (*a.next).value << " ";
    cout << a.next->next->value << endl;

    /*
    
    Accessing a.value:

    Directly accessing the value of the first node.
    a.value = 10.
    Accessing b.value using a.next:

    a.next points to the address of b.
    (*a.next).value or a.next->value gives b.value = 20.
    Accessing c.value using a.next->next:

    a.next points to b, and b.next points to c.
    (*a.next).next->value or a.next->next->value gives c.value = 30.

     */
}