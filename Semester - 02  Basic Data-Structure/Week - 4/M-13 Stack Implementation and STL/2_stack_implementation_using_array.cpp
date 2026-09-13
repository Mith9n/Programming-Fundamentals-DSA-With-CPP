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
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);

  cout << st.size() << endl;

  st.pop();

  if (!st.empty())
  {
     st.pop();
  }

  if (!st.empty())
  {
    cout << st.top() << endl;
  }
}

