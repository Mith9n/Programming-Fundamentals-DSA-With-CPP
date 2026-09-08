#include<stdio.h>
#include <limits.h>
int main (){

int size;
scanf("%d",&size);
int array[size];

for(int i=0;i<size;i++){

    scanf("%d",&array[i]);

}

int max = INT_MIN;

for(int i=0;i<size;i++){

    if(max<array[i])
    {

        max=array[i];
    }
}

int new_array[max+1];

for(int i=0;i<=max;i++){
    new_array[i]=0;
}

for(int i=0;i<size;i++){

    new_array[array[i]]+=1;

}

//now we find array 3rd largest number....
// now,we use reverse loop;

int counter =0;
int unique =0;
int duplicate =0;


for(int i=max;i>=1;i--){
    if(new_array[i]==1){
        counter++;
    }
    if(counter==3){
        printf("The 3rd largest number is:%d\n",i);
        break;

    }

}
    int i;
  for(int i=1;i<max;i++){

    if(new_array[i]==1){
        unique++;
    }
    else if(array[i]>1)
    duplicate++;
  }

  printf("the unique value is:%d index:%d\n",new_array[i],duplicate);
  printf("The duplicate value is:%d index :%d\n",new_array[i],unique);


    return 0;

}

