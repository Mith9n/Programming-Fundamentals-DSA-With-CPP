#include <bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visited_arr [1005];

void bfs(int src){

    queue<int> q ;
    q.push(src);
    visited_arr[src] = true ;
    int  bfs_sum  =0;

    while(!q.empty()){
      
        int parent = q.front();
        q.pop();

       // bfs_sum+=parent;

        cout<<parent<<" ";

        //push children 
      
        for(int children: adj_list[parent]){

            if(visited_arr[children] == false){
            q.push(children);
            visited_arr[children] = true ;
            
            }  
        }
    }

 //   cout <<" bfs :"<<bfs_sum<<endl;
 }
 
 int main() {

    //input Node , Edge .

     int Node , Edge ;
     cin >> Node >> Edge ;

     for(int i=0;i<Edge;i++){
        int a , b ;
        cin >> a >> b ;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
     }

    memset(visited_arr,false,sizeof(visited_arr));
    bfs(0);
     
 }