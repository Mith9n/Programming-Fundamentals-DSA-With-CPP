#include <stdio.h>
#include <limits.h>
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

    for(int i=0; i<n; i++)
    {

        if(array[i]>max)
        {
            max=array[i];
        }
    }

    int new_array[max+1];

    for(int i=0; i<=max; i++)
    {

        new_array[i]+=1;

    }

    for(int i=0; i<n; i++)
    {

        new_array[array[i]]+=1;

    }

// reverse.......

    int counter =0;

    for(int i=max; i>=1; i--)
    {
        if(new_array[i]==1)
        {
            counter++;
        }
        if(counter==3)
        {

            printf("the 3rd largest number :%d",i);
        }

    }




}
