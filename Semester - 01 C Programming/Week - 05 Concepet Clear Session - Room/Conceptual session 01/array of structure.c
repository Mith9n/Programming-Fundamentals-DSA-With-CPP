#include <stdio.h>

struct student {

    double weight;
    int roll;

};


int main (){

    struct student s[10];

    for(int i=0;i<10;i++){
       s[i].roll=11+i;
       s[i].weight=55+i*2;

    }

    for(int i=0;i<10;i++){

        printf("%d %lf\n",s[i].roll,s[i].weight);
    }

    return 0;



}
