#include<stdio.h>
int main ()
{

    int size,reverse[50];
    scanf("%d",&size);
    int array[size];

    for(int i=0; i<size; i++)
    {

        scanf("%d",&array[i]);
    }

    for(int i=size-1,j; i>=0; i--,j++)
    {
        reverse[j]= array[i];
        printf("reverse the index=> %d and the  value=> %d \n",i,reverse[j]);

    }

         printf("\n\n\n");



    for(int  i=0; i<size; i++)
    {

        printf("reverse the index=> %d and the  value=> %d \n",i,reverse[i]);
    }



}


