#include <bits/stdc++.h>
using namespace std;
vector<int>Adj_list[1005];
bool visited_arr[1005];
int Track_level[1005];

void bfs_traversal(int src){
    queue<int>q;
    q.push(src);
    visited_arr[src] = true ;
    Track_level [src] = 0 ;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : Adj_list[parent]){
            if(visited_arr[child] == false){
                q.push(child);
                visited_arr[child] = true ;
                Track_level[child] = Track_level[parent]+1;
            }
        }
    }
}


int main() {
    int Node , Edge ;
    cin >> Node >> Edge ;

    while(Edge--){
        int a,b;
        cin >> a >> b ;
        Adj_list[a].push_back(b);
        Adj_list[b].push_back(a);   
    }

    memset(visited_arr,false,sizeof(visited_arr));
    memset(Track_level,-1,sizeof(Track_level));

    int src , dst;
    cin >> src >> dst ;

    bfs_traversal (src);

    cout << Track_level[dst] <<endl;
   
}
