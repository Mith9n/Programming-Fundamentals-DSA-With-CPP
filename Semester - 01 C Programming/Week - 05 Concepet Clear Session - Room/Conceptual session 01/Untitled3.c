#include <stdio.h>
#include<limits.h>

void input_array(int arr[],int size)
{

    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);

}

int get_max(int arr[],int size)
{

    int max=INT_MIN;

    for(int i=0; i<size; i++)
    {

        if(arr[i]>max)
            max=arr[i];
    }

    return max;


}

void slove()
{

    int sz;
    scanf("%d",&sz);
    int num[sz];
    input_array(num,sz);

    int max=get_max(num,sz);
    printf("The max value is:%d\n",max);



}

int main (void)
{

    int t;
    scanf("%d",&t);

    while(t--)
    {

        slove();
    }


}
