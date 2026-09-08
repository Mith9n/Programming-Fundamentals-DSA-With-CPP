#include<stdio.h>
#include<limits.h>

int main ()
{


    int n;
    scanf("%d",&n);
    int array[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }

    int max=INT_MIN;
    int even_counter=0,odd_counter=0;
    int even_value[n],odd_value[n];

    for(int i=0; i<n; i++)
    {

        if(array[i]%2==0)
        {
            even_value[even_counter]=array[i];
            even_counter+=1;
        }
        else
        {
            odd_value[odd_counter]=array[i];

            odd_counter+=1;
        }
    }

    printf("The even numbers:");

    for(int i=0; even_counter>i; i+=1)
    {

        printf("%d ",even_value[i]);

    }

    printf("\n");
    printf("The odd numbers: ");

    for(int i=0; odd_counter>i; i+=1)
    {
        printf("%d ",odd_value[i]);

    }

    printf("\n");

    printf("The even value is here :%d\n",even_counter);
    printf("The odd value is here  :%d",odd_counter);


    return 0;


}


