#include <stdio.h>
int main (){

    char str[]="bbbaccddd";

    int len=strlen(str);
    int lergest=26;

    int freq[lergest+1];
    for(int i=0;i<lergest;i++){

        freq[i]=0;
    }


    for(int i=0;i<len;i++){

        freq[(str[i]-'a')+1]+=1;
    }














}
