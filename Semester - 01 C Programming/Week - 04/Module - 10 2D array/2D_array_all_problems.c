/*#include <stdio.h>
int main (){

    int row,col;

    printf("Enter your row :");
    scanf("%d",&row);

    printf("Enter your col :");
    scanf("%d",&col);

    int array[row][col];

    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){

            scanf("%d",&array[i][j]);
        }

    }

        for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){

           printf("%d ",array[i][j]);
        }

        printf("\n");

    }




    */

    #include <stdio.h>
    int main (){

    int n;
    printf("Enter your value :");
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++){

        scanf("%d",&array[i]);
    }


    for(int i=0;i<n;i++){

      printf("%d ",array[i]);
    }

    return 0;




 }




