#include <stdio.h>

void test_case_of_array(int t){

    for(int i=0;i<t;i++){


    }

}



void input_of_array(int array[],int size){

    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
}
void output_of_array(int array[],int size){

    for(int i=0;i<size;i++)
        printf("%d\n",array[i]*2);

}





int main (){


    int n;
    printf("Enter your test case:");
    scanf("%d",&n);
    test_case_of_array(n);

    int size;
    printf("Enter your size"")
    scanf("%d",&size);
    int array[size];
    input_of_array(array,size);
    output_of_array(array,size);




}
