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

Student fun (){
    Student Karim(4,10,5.00);
    return Karim ;
}

int main() {   

        Student obj = fun();
        cout <<obj.roll<<" " <<obj.cls<<" " <<obj.gpa<<endl;
     
}
