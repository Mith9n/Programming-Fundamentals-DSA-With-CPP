// Input and  output

/*#include<stdio.h>
int main (){

int N=25;
int array[N];
for (int i=0;i<N;i++){
    scanf("%d",&array[i]);
}
for (int i=0;i<N;i++){
   printf("%d-th possition : %d \n",i,array[i]);
}
return 0;

}*/

// maxium and minimum value ;

#include <stdio.h>
int main ()
{

    int array [5];

    for (int i=0;i<5;i++){
        scanf("%d",&array[i]);

    }
    int max=array[0];
    for (int i=0;i<5;i++){
        if (array>max){
            max=array[i];
        }
    }
    printf("The maximum value is :%d",max);
    return 0;


}



