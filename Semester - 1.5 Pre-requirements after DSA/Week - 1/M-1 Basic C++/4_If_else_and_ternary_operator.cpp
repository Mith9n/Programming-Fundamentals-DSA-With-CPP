#include <iostream>
using namespace std ;

int main (){

    int x ;
    cin >> x ;
    if(x%2 == 0 ){
        cout<<"even"<<endl;
    }else cout <<"odd"<<endl;

    //ternary_operator 

    ( x > 2) ? cout <<"x is greater then 2" : cout <<"x is less then 2" <<endl;
}