#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>Adj_list[105];
int dis[105];
void dijkstra(int src){
    queue<pair<int,int>>q;
    q.push({src,0});
    dis[src] = 0;

    while( !q.empty() ){
        pair<int,int> par = q.front();
        q.pop();
        int par_node = par.first;
        int par_dis = par.second;

        for(auto child : Adj_list[par_node]){
            int child_node = child.first;
            int child_dis = child.second;

            // path relaxaton ;

            if(par_dis + child_dis < dis[child_node]){
                dis[child_node] = par_dis + child_dis ;
                q.push({child_node,dis[child_node]});
            }

        }
    }
}

int main() {
    int Node,Edge;
    cin >> Node >> Edge ;
    while(Edge--){
        int a,b,w;
        cin >> a >> b >> w;
        Adj_list[a].push_back({b,w});
        Adj_list[b].push_back({a,w});
    }
/*  for(int i=0;i<Node;i++){
        cout<< i <<"-> ";
        for(pair<int,int> p : Adj_list[i]){
            cout <<p.first <<" "<<p.second<<", ";
        }
        cout <<endl;
    }
*/
   
    for(int i=0;i<Node;i++){
        dis[i] = INT_MAX ;
    }
    dijkstra(0);

    for(int i=0;i<Node;i++){
        cout <<i <<"->"<<dis[i]<<endl;
    }

}