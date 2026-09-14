#include <bits/stdc++.h>
using namespace std;
int leader[1005];

int find(int index){  //T.C :- 0(N)
    while(leader[index] != -1){// leader ary er ei index e chack kore dekho je -1 ase ki nah ;
    index = leader[index]; // jodi nah paw tahoe leader arry index e je value cilo , oita ke abr index kore check koro ...
    }
    return index ;
}
/* recurtion 
int find(int node){
    if(leader[node] ==- 1){
        return node ;
    }
   int led = find(leader[node]);
   return led ;
} */
    
int main() {

    memset(leader,-1,sizeof(leader));

    leader[0]= 1;
    leader[1] = -1;
    leader[2] = 1;
    leader[3] = 1;
    leader[4] = 5;
    leader[5] = 3;

    cout << find(4) << endl;

    

}