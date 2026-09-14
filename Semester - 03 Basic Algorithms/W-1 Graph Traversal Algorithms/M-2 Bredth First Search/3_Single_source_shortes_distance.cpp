#include <bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visited_arr[1005];
int level[1005];

void breth_first_search (int src){
    queue<int>q;
    q.push(src);
    level[src] = 0;
    visited_arr[src] = true ;
    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adj_list[parent]){
            if( ! visited_arr[child]){
                q.push(child);
                visited_arr[child] = true ;
                level[child] = level[parent]+1;
            }
        }
    }

}
int main() {
    int Node,Edge ;
    cin >> Node >> Edge ;
    for(int i=0 ; i<Edge ; i++){
        int a , b ;
        cin >> a >> b ;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited_arr,false,sizeof(visited_arr));
    memset(level,-1,sizeof(level));

    int src , dst;
    cin >> src >> dst ;
    breth_first_search(src);
    cout<<level[dst]<<endl;
 
}