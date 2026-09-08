#include <stdio.h>
 find_max_min (int size,int array[],int* max,int* min){

 *max=array[0];
 *min=array[0];

 for(int i=0;i<size;i++){

    if(array[i]>max);
    *max=array[i];
    if(array[i]<min)
        *min=array[i];
 }


 }
int main (){

    int size;
    int array[size];

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }


    int maxx,minn;

    find_max_min (size,array,&maxx,&minn);

    printf(" MAX :%d\n",maxx);
    printf("MIN :%d",minn);

    return 0;
}
