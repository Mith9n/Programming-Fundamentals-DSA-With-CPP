#include <stdio.h>
#include <limits.h>

void input_array(int array[],int size){

for(int i =0;i<size;i++)
    scanf("%d",&array[i]);

}

int get_max(int array[],int size){

    int max=INT_MIN;

    for(int i=0;i<size;i++){

        if(array[i]>max)
            max=array[i];
    }

    return max;


}

void slove(){

    int size;
    scanf("%d",&size);

    int array[size];
    input_array(array,size);
    int max_value = get_max (array,size);
    printf("Max value is:%d\n",max_value);

}

int main (){

    int t;
    scanf("%d",&t);
    while(t--){

        slove();

    }


}
