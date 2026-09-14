#include <bits/stdc++.h>
using namespace std;
vector<int>Adj_list[1005];
bool visited_arr[1005];

void dfs_traversal (int src){
    cout << src <<" ";
    visited_arr[src] = true;
    for(int child : Adj_list[src]){
        if(visited_arr[child] == false){
            dfs_traversal(child);
        }
    }
}

int main() {
    
    int Node,Edge ;
    cin >> Edge >> Node ;

    while(Edge--){
        int a,b ;
        cin >> a >> b ;
        Adj_list[a].push_back(b);
        Adj_list[b].push_back(a);
    }

    memset(visited_arr,false,sizeof(visited_arr));

    dfs_traversal(0);

    
}