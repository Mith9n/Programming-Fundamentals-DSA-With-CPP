#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>Adj_list[105];

int main() {
    int Node , Edge ;
    cin >> Node >> Edge ;
    while(Edge--){
        int a,b,w;
        cin >> a >> b >> w ;
        Adj_list[a].push_back({b,w});
        Adj_list[b].push_back({a,w});
    }


    for(int i=0;i<Node;i++){
        cout <<  i <<" : ";
        for(auto p  : Adj_list[i]){
            cout << p.first <<" "<< p.second <<", ";
        }
        cout <<endl;

    }

    
}