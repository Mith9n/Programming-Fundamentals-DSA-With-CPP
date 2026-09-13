#include <bits/stdc++.h>
using namespace std;

class myStack {
public :
    vector<int>v;

  // 5 operation - complixity O(1);

    void push(int value){
        v.push_back (value);
    }

    void pop(){
      v.pop_back();
    }

    int top(){
      return v.back();
    }

    int size() {
      return v.size();
    }

    bool empty(){
      return v.empty();
    }

};

int main() {

  myStack st; // static object
 int n;
 cin>>n;

// input
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
 }

// print 
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

}


