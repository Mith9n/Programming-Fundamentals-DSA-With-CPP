#include <stdio.h>

void myfunction(int array[],int x) {

    for(int i=0;i<x;i++){

        scanf("%d",&array[i]);
    }

}
void printmyfunction(int array[],int x){

    for(int i=0;i<x;i++){

        printf("%d\n",array[i]);
    }


}

int main (){

    int n;
    scanf("%d",&n);
    int array[n];

    myfunction(array,n);
    printmyfunction(array,n);

}
