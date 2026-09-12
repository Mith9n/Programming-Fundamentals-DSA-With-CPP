#include <bits/stdc++.h>
using namespace std;
class Student {
public :
    string name ;
    int roll ;
    int clss ;

    Student (string name ,int roll ,int clss){
        this->name = name ;
        this->roll = roll ;
        this->clss = clss;
    }

    void print_rakib_details(){
        
        cout << name <<" "<<roll <<" "<<clss ;
    }

};
int main() {

    Student Rakib("Rakib",10,12);
    Rakib.print_rakib_details();

}
