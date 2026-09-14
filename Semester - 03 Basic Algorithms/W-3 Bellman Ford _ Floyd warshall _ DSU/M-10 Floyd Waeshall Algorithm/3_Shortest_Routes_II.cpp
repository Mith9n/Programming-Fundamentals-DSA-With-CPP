#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , e;
    cin >> n >> e ;
    int Adj_matrix[n][n];
    
    while(e--){
        int a , b , c;
        cin >> a >> b >> c;
        Adj_matrix[a][b] = c ;
    }

    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    Adj_matrix[i][j] = 0 ;
                }    
                else Adj_matrix[i][j] = INT_MAX;
            }
    }
    
}