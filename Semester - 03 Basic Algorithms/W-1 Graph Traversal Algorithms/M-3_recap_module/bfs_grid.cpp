#include <bits/stdc++.h>
using namespace std;
int row ,col ;
char grid [1005][1005];
bool visited_arr[1005][1005];
vector<pair<int,int>>mv = {{-1,0},{1,0},{0,-1},{0,1}};


bool check_valid(int v_row , int v_col){
        if( v_row < 0 || v_row >=  row || v_col < 0 || v_col >= col ){
            return false ;
        }else return true ;
}

void bfs_traversal(int src_row,int src_col){
    queue<pair<int,int>>q;
    q.push({src_row,src_col});
    visited_arr[src_row][src_col]= true;

    while(q.empty() == false){
        int parent =  q.front();
        q.pop();

        for(int child : adj_list[parent]){
            if(visited_arr[child] == false){
                q.push(child);
                visited_arr[child] = true ;
            }
        }

    }
    
}


int main() {

    cin >> row >> col ;
    
    for(int i=0; i<row ;i++){
        for(int j=0; j<col ;j++){
            cin >> grid[i][j];
        }
    }

    memset(visited_arr,false,sizeof(visited_arr));

    int src_row, src_col ;
    cin >> src_row >> src_col;

    bfs_traversal(src_row,src_col);


    
}