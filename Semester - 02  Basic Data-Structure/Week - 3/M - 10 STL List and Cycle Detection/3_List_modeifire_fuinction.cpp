#include <bits/stdc++.h>
using namespace std;

int main() {
     
     list<int>My_list;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value ;
        cin>>value ;
        My_list.push_back(value);

    }

    int val ;
    cin>> val ;

   // My_list.push_front(val);
   // My_list.push_back(val);
    My_list.pop_front();
    My_list.pop_back();

    for(int value : My_list){
        cout<<value<<" ";
    }


    // 


    
    
}