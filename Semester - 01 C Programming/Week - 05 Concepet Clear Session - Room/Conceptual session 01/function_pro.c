#include<stdio.h>
void  input_array (int array[],int n){

    for(int i=0;i<n;i++)
    {

        scanf("%d",&array[i]);
    }
}
void  output_array (int array[],int n){

    int sum=0;

    for(int i=0;i<n;i++)
    {

      sum+=array[i];

    }
 printf("%d\n",sum);

}
void slove(){

    int n;
    scanf("%d",&n);
    int array[n];

    input_array (array,n);
    output_array (array,n);
}

int main (){

int t;
scanf("%d",&t);

while(t--){

    slove () ;
}

}
