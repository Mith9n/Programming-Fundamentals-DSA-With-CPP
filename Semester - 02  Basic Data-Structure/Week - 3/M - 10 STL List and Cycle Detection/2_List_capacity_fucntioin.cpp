#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>Lst={1,2,3,4,5};
    cout<<Lst.size()<<endl;
    //clear
    //Lst.clear();

    for(int value : Lst){
        cout<<value<<endl; 
    }

    cout<<Lst.size()<<endl;

    if(Lst.empty()){
        cout<<"Empty"<<endl;
    }else cout<<"No"<<endl;

    cout<<Lst.max_size()<<endl;        

    Lst.resize(7);

    for(int value : Lst){
        cout<<value<<" "; 
    }

    
}