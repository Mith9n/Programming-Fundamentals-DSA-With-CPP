#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int value [N] , weight [N];

int knapsack(int n , int max_weight){
    if( n < 0 || max_weight <= 0 ){
        return 0;
    }
    // option 2 
    // beg e rakhbo  or rakhbo nah ?
    if(weight[n] <= max_weight){
        int option_1 = knapsack(n-1, max_weight - weight[n]) + value[n];
        int option_2 = knapsack(n-1 , max_weight );
        return max(option_1,option_2);
    }else {
        // 1 option 
        // beg a rakhte parbo nah ;
        int option_2 = knapsack(n-1 , max_weight );
        return option_2;              
    }
} 

int main() {
    int t;
    cin >> t ;

    while(t--){
        int n , max_weight ;
        cin >> n;
    
        for(int i=0;i<n;i++){
            cin >> value [i];    
        }
    
        for(int i=0;i<n;i++){
            cin >> weight [i];
        }
    
        cin >> max_weight ;
    
      cout << knapsack (n-1,max_weight) <<endl;
    }
   

    
}