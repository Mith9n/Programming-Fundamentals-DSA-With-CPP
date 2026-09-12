#include <bits/stdc++.h>
using namespace std;

class Student{
public :
    int roll ; //member variable
    int cls;
    float gpa;

    Student(int roll , int cls, float gpa){
           this->roll = roll ; 
           this->cls = cls ;
           this->gpa = gpa ;
    }

};

Student* fun (){
    Student Karim(4,10,5.00);
    Student*  p = &Karim ;
    return p ;
}

int main() {   

        Student* obj = fun();
        cout <<obj->roll<<" " <<obj->cls<<" " <<obj->gpa<<endl;
     
}

/*লোকাল (নন-স্ট্যাটিক) ভ্যারিয়েবলের অ্যাড্রেস রিটার্ন করা যদি আপনি একটি লোকাল (নন-স্ট্যাটিক) ভ্যারিয়েবলের অ্যাড্রেস রিটার্ন করেন, তাহলে সেটি ডেংলিং পয়েন্টার (dangling pointer) হয়ে যাবে। কারণ, ফাংশন শেষ হলে লোকাল ভ্যারিয়েবল মেমোরি থেকে ডিলিট হয়ে যায়।

উদাহরণ: #include <iostream>
using namespace std;

int* getAddress() {
    int value = 42; // লোকাল নন-স্ট্যাটিক ভ্যারিয়েবল
    return &value;  // এর অ্যাড্রেস রিটার্ন করা
}
int main() {
    int* ptr = getAddress();
    cout << "Value: " << *ptr << endl; // অনির্দেশিত আচরণ (undefined behavior)
}
সমস্যা:value হলো একটি লোকাল ভ্যারিয়েবল।
ফাংশন শেষ হওয়ার সঙ্গে সঙ্গে value মেমোরি থেকে ডিলিট হয়ে যায়।
তাই ptr যেই মেমোরি অ্যাড্রেস পয়েন্ট করে, সেটি অবৈধ হয়ে যায়, এবং এতে অ্যাক্সেস করলে অনির্দেশিত আচরণ (undefined behavior) দেখা দেবে।

*/
