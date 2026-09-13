#include <bits/stdc++.h>
using namespace std;

int main() {

    stack <int> st;
    queue <int> que;

    int n,m ;
    cin >> n >> m ;
    
    for(int i=0;i<n;i++){
        int value ;
        cin>>value ;
        st.push(value);
    }

     for(int i=0;i<m;i++){
        int value ;
        cin>>value ;
        st.push(value);
    }


    if(st.size() == que.size()){
        bool is_equal = false ;
        while(!st.empty() && !que.empty()){
            if(st.top() == que.front() ){
                is_equal = true ;
            }
            st.pop(),que.pop();
        }
        if(is_equal) {
            cout<< "YES" << endl;
        }else cout<<"NO"<<endl;

    }else cout<<"NO"<<endl;

    
}