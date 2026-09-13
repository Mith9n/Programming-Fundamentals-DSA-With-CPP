#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>lst(5,2);
    for(auto it = lst.begin();it!= lst.end();it++){
        cout<<*it<<endl;
    }

    //array[];
    int arr[]={10,20,30,40,50};
    list <int>Lst(arr,arr+5);
    cout<<endl;

    for(int value : Lst){
        cout<<value<<endl;
    }

    cout<<endl;

    //vector<>;
    vector<int>v={1,2,3,4,5};
    list<int>list_v(v.begin(),v.end());

    for(int value : list_v){
        cout<<value<<endl;
    }
    


    
}