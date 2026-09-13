#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>st;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int val ;
        cin>>val ;
        st.push(val);
    }

    queue<int>q;
    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        q.push(val);
    }

    if(st.size() == q.size()){
        bool is_equal = true;
        while(!st.empty() && !q.empty()){
        if(st.top() != q.front()){
            is_equal = false;
            break;
        }
        st.pop();q.pop();
    } if(is_equal) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }else cout<<"NO"<<endl;
} 