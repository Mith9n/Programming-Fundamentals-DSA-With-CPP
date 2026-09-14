#include <bits/stdc++.h>
using namespace std;
vector<int>Adj_list[105];
int visited[105];
bool path_visit[105];
bool cycle ;

void dfs_traversal(int src){
    visited[src] = true ;
    path_visit[src] = true ;
    for(int child : Adj_list[src]){
        if(visited[child] && path_visit[child]){
            cycle = true ;
        }
        if(!visited[child]){
            dfs_traversal(child);
        }
    }
    path_visit[src] = false ;
       
}

int main() {
    int Node, Edge ;
    cin >> Node >>Edge ;
    for(int i=0;i<Edge;i++){
        int a,b ;
        cin >> a >> b ;
        Adj_list[a].push_back(b);
    }

    memset(visited,false,sizeof(visited));
    memset(path_visit,false,sizeof(path_visit));
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