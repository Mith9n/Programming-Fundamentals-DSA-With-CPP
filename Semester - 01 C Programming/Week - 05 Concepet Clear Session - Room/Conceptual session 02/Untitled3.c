#include<stdio.h>
int main (){

    int n;
    printf("Enter your element :");
    scanf("%d",&n);

    for(int i=0;i<=i*2-1;i++){

        for(int j=0;j<=i*2-1;j++){

            if(i==1 || j==i*2-1)
                printf("#");

        }
        printf("\n");
    }

}
