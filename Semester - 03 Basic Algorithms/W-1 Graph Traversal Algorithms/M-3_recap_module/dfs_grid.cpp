#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited_arr[1005][1005];
vector<pair<int,int>>mv ={{-1,0},{1,0},{0,-1},{0,1}};
int row , col;

bool valid (int  v_row, int v_col){
    if(v_row < 0 || v_row >= row|| v_col < 0 || v_col >= col)   
        return false ;
    else return true ;

}

void dfs_traversal(int src_row,int src_col){
    cout << src_row <<" "<<src_col<<endl;
    visited_arr[src_row][src_col] = true;

    for(int i=0;i<4;i++){
        int child_row,child_col ;
        child_row = src_row + mv[i].first;
        child_col = src_col + mv[i].second;
        //cout << child_row <<" "<<child_col <<endl;
        if( valid(child_row,child_col)== true && visited_arr[child_row][child_col] == false){
            dfs_traversal(child_row,child_col);
        }
    }
}

int main() {

    cin >> row >> col ;
    for(int i=0;i<row;i++){
        for(int j= 0 ; j<col;j++){
            cin >>grid[i][j];
        }
    }


    int src_row , src_col ;
    cin >> src_row >> src_col ;

    memset(visited_arr,false,sizeof(visited_arr)); //ita works also 2d array

    dfs_traversal(src_row,src_col);
}