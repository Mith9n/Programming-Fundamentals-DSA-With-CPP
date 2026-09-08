#include <stdio.h>
int main ()
{

    int n =8;
    int array[8]={12,7,9,3,15,2,6,5};



    for(int i=0; i<n; i++)
    {
        scanf("%d",array[i]);

    }

        printf("\n");

    for(int x=0; x<n; x++)
    {
        for(int i=0; i<(n-1); i++  )
        {

            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+i];
                array[i+1]=temp;

            }

        }

        for(int i=0; i<n; i++)
        {

            printf("%d ",array[i]);
        }


        printf("\n");
    }

return 0;
}


