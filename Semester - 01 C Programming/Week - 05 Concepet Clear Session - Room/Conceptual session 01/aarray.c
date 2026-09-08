#include <stdio.h>
#include <limits.h>

int main (){

int n;
scanf("%d",&n);

int array[n];

for(int i=0;i<n;i++){
    // n is =array size;
    scanf("%d",&array[i]);//push array element;
}

int max=INT_MIN; // we know that, array first always array[0],now i can touch the first emement;

for (int i=0;i<n;i++){
    if(array[i]>max){

        max=array[i];
    }

}

// now  we can the max element for the testing perpouse...
//printf("the largest element:%d",max);
// now we , run the secound approse..

int arr[max+1];

    for(int i=0;i<=max;i++){

        arr[i]=0;
    }

    for(int i=0;i<n;i++){

        arr[array[i]]+=1;
        //we can write the same ways like, arr[array[i]]++;// both are same ways
    }

    int uniq=0,dupli=0;

    for(int i=1;i<max;i++ )//reverse loop;
    {

        if(arr[i]==1){
                uniq+=1;
        }
        if(arr[i]>1){

           dupli+=1;
        }


    }

    printf("unique:%d\n       ",uniq);
    printf("duplicate:%d",dupli);

    return 0;

}
