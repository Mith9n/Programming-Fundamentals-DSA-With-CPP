#include <iostream>
#include <algorithm> //must added algo pre-processor unit
using namespace std ; 

int main (){
    int n , m ;
    cin >> n >> m ;

    cout << max(n,m) <<endl ;
    cout << min(n,m) <<endl ;

   // cout <<swap(n,m) <<endl; --its wrong process swap funtion cannot retun value,just change there values;

   swap (n,m);

   cout <<"After swaping : "<< n <<" "<< m <<endl;

   // "Extra implementation of max and min"

   cout << max({10,5,12,15,17,20}) <<endl;
   cout << min({10,5,12,15,17,20}) <<endl;

}