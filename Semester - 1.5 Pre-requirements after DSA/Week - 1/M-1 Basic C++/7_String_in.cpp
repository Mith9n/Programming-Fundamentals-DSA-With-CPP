#include <iostream>
using namespace std ;

int main (){
    //char array 
    char n [10]; //just a word
    cin >> n ;
    cout << n <<endl;
    
    cin.ignore(); //  ignore the space key 

    char m[50];
    cin.getline(m,50); // with space ;
    cout << m <<endl;

    cin.ignore(); // ignore the space key

    string s;
    getline(cin,s);
    cout<<s<<endl;
}
