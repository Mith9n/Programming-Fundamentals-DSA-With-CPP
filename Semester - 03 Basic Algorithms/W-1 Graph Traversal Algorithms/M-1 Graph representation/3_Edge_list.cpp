#include <bits/stdc++.h>
using namespace std;

int main() {

    int Node , Edge ;
    cin >> Node >> Edge ;

    vector<pair<int,int>>Edge_list ;

    while(Edge--){
        int x , y ;
        cin >> x >> y ;
        Edge_list.push_back({x,y});
    }
 
    for(pair <int ,int > p : Edge_list){  // auto p : Edge_list ;
        cout << p.first <<" "<<p.second <<endl;
    }

}