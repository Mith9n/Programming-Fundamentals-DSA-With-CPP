#include <bits/stdc++.h>
using namespace std;

int main() {

    int t ;
    cin >> t ;

    while(t--){
    
    set<int>s;
    int n;
    cin >> n;
    while (n--){
        int value ;
        cin >> value ;
        s.insert(value); //;logN
    }

    for(auto it = s.begin() ; it != s.end() ; it++){
        cout << *it <<" ";
    
    }

    }
     
}