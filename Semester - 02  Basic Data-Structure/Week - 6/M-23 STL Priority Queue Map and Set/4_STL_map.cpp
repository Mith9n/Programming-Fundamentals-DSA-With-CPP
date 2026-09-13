#include <bits/stdc++.h>
using namespace std;

//map_name [key] = value ;
// map print use iterator ;
// if you print key use (*it).first and  print value use (*it).second .

int main() {
    map <string,int>mp;
    
    mp["tamim"] = 2;
    mp["sakib"] = 5;
    mp["papon_da"] = 1 ; //logN ;
    mp["nazmul"] = 3 ;

    // map count 

    if(mp.count("sakib")){
        cout<<"present"<<endl;
    }else cout<<"Not present";

    for(auto it = mp.begin();it != mp.end();it++){ //NlogN;
        cout<<it->first <<" "<<it->second<<endl; //logN
    }

}