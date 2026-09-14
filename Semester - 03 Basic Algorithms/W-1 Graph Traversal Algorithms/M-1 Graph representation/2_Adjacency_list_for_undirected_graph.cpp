#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int Node , Edge ;
    cin >> Node >> Edge ;

    vector<int>adj_list[Node];

    while(Edge--){
        int x , y ;
        cin >> x  >> y ;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x); //undriected

    }
    

    for(int i =0 ; i <Node ;i++){
        cout << i <<"-> ";
        for(int i : adj_list[i]){
            cout <<i<<" "; 
            }cout <<endl;
    }
   
}