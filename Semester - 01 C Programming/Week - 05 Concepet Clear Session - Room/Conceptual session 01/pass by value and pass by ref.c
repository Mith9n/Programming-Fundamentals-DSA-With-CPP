#include <stdio.h>

void add_sum (int* x,int* y){

    int* p =&x;
        **p=10;

    int sum =*x+*y;

    printf("The sum value is:%d",sum);



}

int main (){

    int a=5,b=7;

    add_sum(&a,&b);





}
