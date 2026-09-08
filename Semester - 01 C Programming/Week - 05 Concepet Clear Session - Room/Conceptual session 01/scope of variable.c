#include <stdio.h>

int n=7;

void add_two_number(){

    int a,b;
    scanf("%d %d",&a,&b);
    printf("The sum is:%d\n",a+b);
    printf("print the add function :%d\n",n);

    n+=2;



}


int main (){

    int m=7;
    add_two_number();

    printf("print of main function :%d\n",n);





}
