#include <bits/stdc++.h>
using namespace std;

int main() {

    queue<int>q1;
    stack<int>st;
    queue<int>q2;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int val;
        cin >> val ;
        q1.push(val);
    }

    while(!q1.empty()){
        st.push(q1.front());
        q1.pop();
    }

    while(!st.empty()){
        q2.push(st.top());
        st.pop();
    }

    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
return 0;

}