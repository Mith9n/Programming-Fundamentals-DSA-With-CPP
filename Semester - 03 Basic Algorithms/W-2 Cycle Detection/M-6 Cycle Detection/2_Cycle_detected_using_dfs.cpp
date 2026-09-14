#include <bits/stdc++.h>
using namespace std;
vector<int>Adj_list[105];
int visited[105];
int parent[105];
bool cycle ;

void dfs_traversal(int src){
    visited[src] = true ;
    for(int child : Adj_list[src]){
        if(visited[child] && parent[src] != child){
            cycle = true ;
        }
        if(!visited[child]){
            parent[child] = src ;
            dfs_traversal(child);
        }
    }
       
}

int main() {
    int Node, Edge ;
    cin >> Node >>Edge ;
    for(int i=0;i<Edge;i++){
        int a,b ;
        cin >> a >> b ;
        Adj_list[a].push_back(b);
        Adj_list[b].push_back(a);
    }

    memset(visited,false,sizeof(visited));
    memset(parent,-1,sizeof(parent));
    cycle = false ;

    for(int i=0;i<Node;i++){
        if(!visited[i]){
            dfs_traversal(i);
        }
    }

    if(cycle){
    cout<<"cycle detected\n";
    }else cout <<"Not detected\n";

}