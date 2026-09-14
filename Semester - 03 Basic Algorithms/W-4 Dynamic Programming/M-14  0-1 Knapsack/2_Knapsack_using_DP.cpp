#include <bits/stdc++.h>
using namespace std;

int tetranaccii(int n) {

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
  
    int t0 = 0 , t1 = 1 , t2 = 1 , t3 = 2 ; 
    int result = 0;

    for(int i = 0 ; i <= n ;i++){
        result = t3+t2+t1+t0;
        t0 = t1;
        t1 = t2;
        t2 = t3;
        t3 = result;
    }

    return result ;
}

int main() {
    int n;
    cin >> n;
    cout << tetranaccii(n) << endl;
  
}