#include <bits/stdc++.h>
using namespace std;

char grid [101][101];
bool visited_arr[101][101];
vector<pair<int,int>> mv = {{-1,0},{1,0},{0,-1},{0,1}};
 int n , m ;

bool valid(int i ,int j){
    if(i < 0 || i >= n || j< 0 || j >= m){
        return false ;
    }else return true ;
}

void dfs(int s_row,int s_col){
    cout << s_row <<" "<<s_col <<endl ;
    visited_arr[s_row][s_col] = true ;

    for(int i =0;i<4;i++){
        int child_row , child_col ;
        child_row = s_row + mv[i].first;
        child_col = s_col + mv[i].second; 
        if( valid(child_row,child_col) == true && !visited_arr[child_row][child_col]){
            dfs(child_row,child_col);
        }
    }
}

int main() {
    cin >> n >> m ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << grid[i][j];
        }
        cout<<endl;
    }
    memset(visited_arr,false,sizeof(visited_arr));

    int s_row , s_col ;
    cin >>s_row >> s_col ;
    dfs(s_row,s_col);
    


}