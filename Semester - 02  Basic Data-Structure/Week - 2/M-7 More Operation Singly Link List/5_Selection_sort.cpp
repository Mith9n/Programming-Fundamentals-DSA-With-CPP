#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr [5]={1,7,3,6,4};
 
    for(int i=0;i<5-1;i++){  // 1 7 3 6 4 
        for(int j=i+1;j<5;j++){ // 7 3 6 4
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    
}