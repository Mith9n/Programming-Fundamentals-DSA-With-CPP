#include <stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int even_counter=0;
    int odd_counter=0;
    for(int i=0; i<n; i++)
    {
        if(array[i]%2==0)
        {

            even_counter++;


        }
        else
        {

            odd_counter++;
        }

    }
printf(" even %d\n",even_counter);
        printf("odd %d",odd_counter);
        return 0;
}




