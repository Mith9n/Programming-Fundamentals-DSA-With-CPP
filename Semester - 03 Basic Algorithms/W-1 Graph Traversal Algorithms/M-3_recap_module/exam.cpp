#include <bits/stdc++.h>
using namespace std;

int main() {
    int Node , Edge ;
    cin >> Node >> Edge ;

    int Adj_matrix [Node][Node];
    memset(Adj_matrix,0,sizeof(Adj_matrix));

    while(Edge--){
        int x,y ;
        cin >> x >> y;
        Adj_matrix[x][y] = 1;
    }   

    int qur;
    cin >> qur ;

    while(qur--){

        int  a,b ;
        cin >> a >> b;

        if(a == b || Adj_matrix[a][b] ==1){
            cout <<"YES"<<endl;
        } else cout <<"NO"<<endl;

    }

}