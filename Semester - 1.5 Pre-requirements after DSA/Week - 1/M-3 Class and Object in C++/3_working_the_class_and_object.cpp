#include <bits/stdc++.h>
using namespace std;

class Student {
public :
    char name[50];
    int roll ;
    long long reg ;
    float gpa ;

};

int main() {
   
   /* Student s ;
    char temp [50]= "Akib";
    strcpy(s.name,temp);
    s.roll = 12;
    s.reg = 1213276690 ;
    s.gpa = 3.67;

    cout <<s.name <<" "<<s.roll<<" "<<s.reg<<" "<<s.gpa ; */

    //input 

    Student s;
    cin.getline(s.name,50); // must mention size ;
    cin>>s.roll >> s.reg >> s.gpa ;

    cin.ignore();

    Student m ;
    cin.getline(m.name,50);
    cin>>m.roll >>m.reg>>m.gpa;

    cout <<s.name <<" "<<s.roll<<" "<<s.reg<<" "<<s.gpa<<endl;
    cout <<m.name <<" "<<m.roll<<" "<<m.reg<<" "<<m.gpa;

    
}