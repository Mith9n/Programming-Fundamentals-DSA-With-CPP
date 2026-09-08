#include <stdio.h>


int size_of_array(char name[]){

    int count =0;

    for(int i=0; name[i]!='\0';i++){

        count++;
    }

    return count;

}


void slove(){

    char name[100];
    //fgets(name,sizeof(name),stdin);
    scanf("%s",name);

    int array_size = size_of_array(name);
    printf("The array size is: %d\n",array_size);


}
int main (void){

int t;
scanf("%d",&t);

while(t--){

    slove();
}


}
