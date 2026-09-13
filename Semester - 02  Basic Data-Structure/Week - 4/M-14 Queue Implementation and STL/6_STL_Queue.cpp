#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int>q;

    int sz ;
    cin>>sz;

    for(int i=0;i<sz;i++){
        int val;
        cin>>val;
        q.push(val);
    }    

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;

    
}