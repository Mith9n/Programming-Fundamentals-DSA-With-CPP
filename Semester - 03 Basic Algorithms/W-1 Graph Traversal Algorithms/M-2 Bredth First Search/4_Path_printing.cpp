#include <bits/stdc++.h>
using namespace std;
vector<int>Adj_list[1005];
bool visited_arr[1005];
int level[1005];
int p_parent[1005];


void breth_first_search(int src){
    queue<int>q;
    q.push(src);
    visited_arr[src] = true ;
    level[src] = 0;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        
        for(int child : Adj_list[parent]){
            if(!visited_arr[child]){
                q.push(child);
                visited_arr[child] = true ;
                level[child] = level[parent]+1;
                p_parent[child]=parent;
            }
        }
    }
    
}

int main() {
    int Node , Edge ;
    cin >> Node  >> Edge ;
    for(int i=0;i< Edge;i++){
        int x , y ;
        cin >> x >> y ;
        Adj_list[x].push_back(y);
        Adj_list[y].push_back(x);
    }
    
    memset(visited_arr,false,sizeof(visited_arr));
    memset(level,-1,sizeof(level));
    memset(p_parent,-1,sizeof(p_parent));

    int src , dst ;
    cin >> src >> dst ;
    breth_first_search(src);  

   /* for(int i=0;i<Node ;i++){
        cout << i <<" parent : "<<p_parent[i]<<endl;
    } */
   vector<int>path;
   int N = dst ;
   while(N != -1){
    path.push_back(N);
    N = p_parent[N];
   }

    reverse(path.begin(),path.end());

    for(int x : path){
        cout << x <<" ";
    }

}