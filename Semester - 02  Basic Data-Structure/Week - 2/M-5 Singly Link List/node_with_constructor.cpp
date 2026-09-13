// node_with_constructor

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
/*কেন next পাস করা হয়নি?

Constructor-এ শুধু value পাস করা হয়েছে, কারণ এই সময়ে next পয়েন্টারকে সেট করার কোনো প্রয়োজন নেই।
যখন লিংকড লিস্ট তৈরি হবে, তখন আমরা next পয়েন্টারকে আলাদাভাবে সেট করছি।
উদাহরণ:
Node a(10), b(20), c(30);
a.next = &b;  // a নোডের next পয়েন্টার b নোডের দিকে পয়েন্ট করছে
b.next = &c;  // b নোডের next পয়েন্টার c নোডের দিকে পয়েন্ট করছে
এখানে next পয়েন্টারগুলো লিংকড লিস্ট তৈরি করার সময় আলাদাভাবে সেট করা হয়েছে।

Constructor কীভাবে কাজ করছে?

যখন তুমি Node a(10); লিখো, তখন:
Constructor Node(int value) কল হয়।
a.value-এ 10 সেট হয়।
a.next-কে NULL করা হয়।
এই ধরণের কাজ b এবং c নোডের ক্ষেত্রেও হচ্ছে।
next পাস না করার সুবিধা:

next পয়েন্টার সবসময় আলাদা নোডের দিকে পয়েন্ট করবে।
আমরা যখন লিংকড লিস্টের কাঠামো তৈরি করি, তখনই next পয়েন্টারগুলো যুক্ত করা হয়। */


int main()
{
    Node a(10), b(20), c(30);
    a.next = &b;
    b.next = &c;

    cout << a.value << " ";
    cout << a.next->value << " ";
    cout << a.next->next->value << endl;
}