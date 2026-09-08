#include <stdio.h>
#include <string.h>

int main ()
{

    char name[100];
    gets(name);

    int len=strlen(name);

    for(int i=len;0<=i;i--)
    {

        printf("%c",name[i]);
    }



}
