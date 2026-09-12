#include <bits/stdc++.h>
using namespace std;
class Student{
public:
    string name ;
    int roll ;
    int marks ;

};

int main() {
    int n;
    cin >> n ;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,arr[i].name);
        cin >> arr[i].roll >>arr[i].marks ;
    }

    // find min 

    int mn = INT_MAX ;

for(int i=0;i<n;i++){
    mn = min(arr[i].marks,mn);
}

cout << mn <<endl;
    
}