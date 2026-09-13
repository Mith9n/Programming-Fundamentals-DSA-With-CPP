#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];    
    }

    int value ;
    cin >> value ;

    v.push_back(value);

    int current_index = v.size()-1 ;

    //cout<<parent_index <<endl;

    while(current_index != 0){
    int parent_index = (current_index-1)/2;
    if(v[parent_index] < v[current_index]){
        swap(v[parent_index],v[current_index]);
    }else break;       
     current_index = parent_index ; 
    }

    for(int val : v){
        cout<< val <<" ";
    }
}
