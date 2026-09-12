#include <bits/stdc++.h>
using namespace std;

class Student{
public :
    int roll ; //member variable
    int cls;
    float gpa;

/*this->roll = roll মানে কী?
this->roll (অর্থাৎ Akib এর মেম্বার ভ্যারিয়েবল roll) = কন্সট্রাক্টরের প্যারামিটার roll।
এটি বলছে: Akib অবজেক্টের মেম্বার ভ্যারিয়েবল roll এর মান 12 করা হোক।*/

    Student(int roll , int cls, float gpa){
           this->roll = roll ; 
           this->cls = cls ;
           this->gpa = gpa ;
    }

};

int main() {        

        Student Akib (12,6,4.58);  
        Student Rakib (11,9,4.98);

        cout <<Akib.roll<<" " <<Akib.cls<<" " <<Akib.gpa<<endl;
        cout <<Rakib.roll<<" " <<Rakib.cls<<" " <<Rakib.gpa<<endl;
     
}