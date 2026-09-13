#include <bits/stdc++.h>
using namespace std;

void insert_max_heap(vector<int>&v,int value){
    v.push_back(value);
    int current_index = v.size()-1;
    while(current_index != 0){
        int parent_index = (current_index-1)/2;
        if(v[parent_index] < v[current_index]){
            swap(v[parent_index],v[current_index]);
        }
        else break ;
        current_index = parent_index ;
    }

}

void delete_max_heap (vector<int>&v){

    v[0] = v.back();
    v.pop_back();
    //cout<<v[0]<<endl;
    int current_index = 0;

    while(true){
    int left_index = (current_index * 2 ) + 1;
    int right_index = (current_index * 2) + 2 ;

    int left_value = INT_MIN ,  right_value = INT_MAX ;

    if(left_index < v.size())
        left_value = v[left_index];

    if(right_index < v.size()){
        right_value = v[right_index];
    }

    if (left_value > right_value && left_value > v[current_index]) {
        swap(v[left_index],v[current_index]);
        current_index = left_index ;

    }

    else if (right_value > left_value && right_value > v[current_index]) {
        swap(v[right_index],v[current_index]);
        current_index = right_index;
    }

    else break;

    }
    
}

void print_max_heap(vector<int>&v){
    for(int i : v){
        cout << i <<" ";
    }
}

int main() {
    vector <int> v;
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int value ;
        cin>> value ;
        insert_max_heap(v,value);
    }
    delete_max_heap(v);
    print_max_heap(v);
    
}