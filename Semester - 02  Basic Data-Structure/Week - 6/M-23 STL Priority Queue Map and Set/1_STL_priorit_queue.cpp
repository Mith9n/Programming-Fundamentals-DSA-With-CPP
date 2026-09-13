#include <bits/stdc++.h>
using namespace std;

//priority_queue<int> maxHeap;
//priority_queue<int, vector<int>, greater<int>> minHeap;

int main() {

    priority_queue <int> max_heap ;
    
    max_heap.push(10);
    max_heap.push(20);
    max_heap.push(40);
    max_heap.push(30);

    while(!max_heap.empty()){
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }

    cout<<endl;

   priority_queue <int,vector<int>,greater<int>> min_heap;

   min_heap.push(20);
   min_heap.push(30);
   min_heap.push(40);
   min_heap.push(10);

   while(!min_heap.empty()){
         cout<<min_heap.top() <<" ";
         min_heap.pop();
   }
    
}