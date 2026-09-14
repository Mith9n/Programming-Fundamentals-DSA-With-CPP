#include <bits/stdc++.h>
using namespace std;
vector<int>Adj_list[1005];
int visited_arr[1005];

void breth_first_search( int src){
    queue<int>q;
    q.push(src);
    visited_arr[src] = true ;

    while( !q.empty()){
        int parent = q.front();
        q.pop();
        cout << parent <<" ";

        for(int child : Adj_list[parent]){
            if(visited_arr[child] == false){
                visited_arr[child] = true ;
                q.push(child);
            }
        }
    }
}


int main() {

    int Node , Edge ;
    cin >> Node >> Edge ;

    for(int i=0;i<Edge;i++){
        int a , b ;
        cin >> a >> b;
        Adj_list[a].push_back(b);
        Adj_list[b].push_back(a);
    }

    memset(visited_arr,false,sizeof(visited_arr));
    
    int src ;
    cin >> src ;

    breth_first_search(src);

}