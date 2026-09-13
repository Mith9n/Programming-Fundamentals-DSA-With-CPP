#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int insert_value ;
    cin>> insert_value ;

    v.push_back (insert_value);
    
    cout<<v.size()<<endl;

    int current_index = v.size()-1;
    int parent_index = (current_index-1)/2;

    while(current_index != 0){

        if(current_index < parent_index){
            swap(v[current_index],v[parent_index]);
        } else break ;

        current_index =parent_index ;    
    }    


    for(int val : v){
        cout<<val<<" ";
    }
}