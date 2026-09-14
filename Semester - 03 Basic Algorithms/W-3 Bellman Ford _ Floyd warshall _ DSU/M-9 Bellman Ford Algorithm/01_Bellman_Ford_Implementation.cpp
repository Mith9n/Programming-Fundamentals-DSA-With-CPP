#include <bits/stdc++.h>
using namespace std;
class Edge {
public :
    int a , b , c ;  
    Edge(int a ,int b ,int c){
        this->a = a;
        this->b = b ;
        this->c = c;
    }
};

int dis [1005];
vector<Edge>Edge_list ;
int n , e ;

void ballman_ford(){
    for(int i =0; i<n-1;i++){
        for(auto Eu : Edge_list){
            int a , b , c ;
            a = Eu.a;
            b = Eu.b;
            c = Eu.c;
    
            if(dis[a]+c <dis[b] && dis[a] != INT_MAX){
                dis[b] = dis[a] + c;
            }
        }
    }
}


int main() {
    cin >> n >> e ;
    while (e--)
    {
        int a , b , c;
        cin >> a >> b >> c ;
        Edge_list.push_back(Edge(a,b,c)); 
    }

    for(int i=0; i<n ;i++){
        dis[i] = INT_MAX;
    }
    
    dis[0] = 0 ;

    bellman_ford();

    for(int i=0;i<n;i++){
        cout <<i <<"->" <<dis[i]<<endl;
    }
    
}