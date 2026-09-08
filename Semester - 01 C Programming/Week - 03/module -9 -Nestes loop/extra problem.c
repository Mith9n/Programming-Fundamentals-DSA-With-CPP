/*#include <stdio.h>
int main (){

int N;
scanf("%d",&N);
int arr [N];

for (int i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
int maxx=arr[0];

for (int i=0;i<N;i++){

    if(arr[i]<maxx){

        maxx=arr[i];
    }
}

    printf("%d",maxx);
    return 0;



}*/


/*#include <stdio.h>
int main ()

{
    int n;
    scanf("%d",&n);
    int array [n];

    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

     for (int i=0;i<n;i++){
       printf("%d \n",array[i]);
    }

    return 0;



} */


/*#include<stdio.h>
int main ()
{

    int n;
    printf("Create your array size :");
    scanf("%d",&n);

    int array[n];
    printf("Input your %d element:",n);

    for (int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int even_counter=0;
    int odd_counter=0;

    for (int i=0; i<n; i++)
    {
        if (array[i]%2==0)
        {

            even_counter++;

        }
        else (array[i]%2!=0);
        {

            odd_counter++;


        }
    }


    printf("  Even numbers is :%d",even_counter);
     printf("  Even numbers is :%d",odd_counter);

     getchar();

}*/


