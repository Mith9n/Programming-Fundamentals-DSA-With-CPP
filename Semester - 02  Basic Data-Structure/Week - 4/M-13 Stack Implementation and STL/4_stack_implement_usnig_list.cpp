#include <bits/stdc++.h>
using namespace std;

class myStack {
public :
    vector<int>l;

  // 5 operation - complixity O(1);

    void push(int value){
        l.push_back (value);
    }

    void pop(){
      l.pop_back();
    }

    int top(){
      return l.back();
    }

    int size() {
      return l.size();
    }

    bool empty(){
      return l.empty();
    }

};

int main() {

  myStack l; // static object
 int n;
 cin>>n;

// input
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    l.push(x);
 }

// print 
while(!l.empty()){
    cout<<l.top()<<" ";
    l.pop();
}

}


