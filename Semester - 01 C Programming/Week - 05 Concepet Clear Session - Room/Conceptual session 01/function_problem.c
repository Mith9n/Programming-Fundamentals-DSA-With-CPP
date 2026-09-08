#include <stdio.h>
#include <limits.h>

void input_element(int arr[],int siz){

    for(int i=0;i<siz;i++)
        scanf("%d",&arr[i]);

}

int get_max_number(int arr[],int siz){

    int max=INT_MIN;

    for(int i=0;i<i;i++){
        if(arr[i]>max)
            max=arr[i];
    }

    return max;

}

void slove(){

    int sz;
    scanf("%d",&sz);
    int arr[sz];
    input_element(arr,sz);
   int max_value = get_max_number(arr,sz);

   printf("The max value is :%d",max_value);


}

int main (void){

int t;
scanf("%d",&t);

while(t--){


    slove();


}

}
