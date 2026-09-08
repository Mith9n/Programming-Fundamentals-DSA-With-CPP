#include <stdio.h>
#include <limits.h>

int main ()
{
    int size;
    printf("Enter your array's size :");
    scanf("%d",&size);

    int array[size];

    for(int i=0; i<size; i++)
    {

        scanf("%d",&array[i]);
    }

    int max_element=INT_MIN;

    for(int i=0; i<size; i++)
    {

        if(array[i]> max_element)
        {

            max_element=array[i];

        }

    }

    printf("The max value is :%d",max_element);






    return 0;



}
