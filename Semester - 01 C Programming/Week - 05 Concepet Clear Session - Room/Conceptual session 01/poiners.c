#include <stdio.h>
int main (){

    int a=5;

    int* p =&a;

    int** q =&p;

    **q =7;

    int*** r=&q;
    ***r=9;

    printf("The value of (a) is : %d",a);
    return 0;




}
