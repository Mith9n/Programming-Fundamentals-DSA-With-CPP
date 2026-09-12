#include <bits/stdc++.h>
using namespace std;

int main() {

   /*  static arry
   
   int arr1[3];

    for(int i=0;i<3;i++){
        cin >> arr1[i];
    }

    int arr2[5];


    for(int i=0;i<3;i++){     
        arr2[i] = arr1[i];
    }

     arr2[3]= 40,arr2[4]=50;


    for(int i=0;i<5;i++){
        cout<< arr2[i] <<"";
    }*/

   // dynamic arry 

   int *arr = new int [3];

   for(int i=0;i<3;i++){
    cin >> arr[i];
   }

    int *brr =new int [5];
    for (int i =0;i<3;i++){
        brr[i] = arr[i];
    }

    for(int i=3;i<5;i++){
        cin >> brr[i];
    }
    delete[] arr ;

    for(int i=0;i<5;i++){
        cout <<brr[i]<<" ";
    }

    
}