#include <stdio.h>
int main (){

    char  name[50];
    fgets(name,sizeof(name),stdin);

    int len=strlen(name);
    printf("%d",len);





}
