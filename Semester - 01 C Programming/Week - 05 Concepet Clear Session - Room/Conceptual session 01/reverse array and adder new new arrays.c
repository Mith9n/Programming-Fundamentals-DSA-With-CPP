#include <stdio.h>
int main (){

    int n;
    scanf("%d",&n);
    int main_array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&main_array[i]);
    }

    int new_array[n];

    for(int i=n-1,j=0;i>=0;i--,j++){

        new_array[i]=main_array[i];

    }

    //for(int i=0;i<n;i++)
int i;
        printf("Reverse array :%d",new_array[i]);

    return 0;



}
