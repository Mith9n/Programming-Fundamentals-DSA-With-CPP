#include <bits/stdc++.h>
using namespace std;
class Teacher{
public :
        string name ;
        string dep ;
        int salary ;

};
int main() {
    int n;
    cin >> n;
    cin.ignore();
    Teacher arr[n];

    for(int i=0 ; i<n ; i++){
        getline(cin,arr[i].name);
        getline(cin,arr[i].dep);
        cin >> arr[i].salary;
            cin.ignore();
 
    } 

    // max salary 

    Teacher mx ;
    mx.salary = INT_MIN;

    for(int i=0 ; i<n ; i++){
        if( arr[i].salary > mx.salary){
            mx = arr[i];
        }
    }   

    cout <<mx.name <<" "<<mx.dep <<mx.salary<<endl;

}