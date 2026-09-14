#include <bits/stdc++.h>
using namespace std;

int main() {
    int Node , Edge ;
    cin >> Node >> Edge ;

    vector<int>Adj_list[Node];
    while(Edge--){
        int x,y ;
        cin >> x >> y;
        Adj_list[x].push_back(y);
        Adj_list[y].push_back(x);
        
    }   

    int qur;
    cin >> qur ;

    while(qur--){
        int n ;
        cin >> n;
        vector <int> v;
       for (int value : Adj_list[n]) {
        v.push_back(value);
        }

        sort(v.begin(),v.end(),greater<int>());
        if(v.size()==0)cout <<"-1";
        else {
            for(int value : v ){
                cout <<value <<" ";
            }
        }cout <<endl;

    }

}