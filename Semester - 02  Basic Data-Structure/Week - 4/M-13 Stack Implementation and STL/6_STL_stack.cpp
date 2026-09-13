#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value ;
        st.push(value);
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    cout<<st.size()<<endl;
    
    if(st.empty()== true){
        cout<<"empty";
    }else cout<<"not empty";

}