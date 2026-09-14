#include <bits/stdc++.h>
using namespace std;

int main() {

    int Node,Edge ;
    cin >> Node >> Edge ;
    int adj_matrix [Node][Node];

/* for(int i =0; i<Node ;i++){
        for(int j =0 ; j<Node ;j++){
            adj_matrix[i][j] = 0 ;
        }
    } */

/*✔ Edge সংখ্যা বলে দেয়, আমাদের কয়টা সংযোগ ইনপুট দিতে হবে।
  ✔ Node সংখ্যা বলে দেয় matrix-এর সাইজ 𝑁×𝑁 */

    memset(adj_matrix,0,sizeof(adj_matrix)); 

    for(int i=0 ;i<Node ;i++){
        for(int j =0 ;j<Node ;j++){
            if(i == j) adj_matrix [i][j] = 1 ;
        }
    }

    for(int i = 0 ; i < Edge ;i++){
        int x ,  y ;
        cin >> x >> y ;
        adj_matrix[x][y] = 1;
        adj_matrix[y][x] = 1; // for underected

    }

    for(int i=0 ;i<Node ;i++){
        for(int j =0 ;j<Node ;j++){
            cout << adj_matrix[i][j] <<" ";
        }
        cout<<endl;
    }


}