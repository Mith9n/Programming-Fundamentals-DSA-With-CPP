/*#include<stdio.h>
int main ()
{

    char name[100];

    fgets(name,sizeof(name),stdin);

    for(int i=0; name[i]!=0; i+=1 )
    {

        if(name[i]>='a' && name[i]<='z')

            name[i]-=32;
    }


    puts(name);

}*/

// way to long word..


#include <stdio.h>
#include<string.h>
int main (){

    char name[100];

    fgets(name,sizeof(name),stdin);

    int lenght=strlen(name)-1;

    if(lenght>10){

        printf("%c%d%c",name[0],lenght-2,name[lenght-1]);
    }
    else{
        puts(name);
    }



}
