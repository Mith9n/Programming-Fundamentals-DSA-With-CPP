#include <stdio.h>
struct student {
   const char name [126];
    int roll;
    int age;


};

int main (){

    struct student s;
   strcpy(s.name,"maruf");

   strcpy(s.name,"maruf hasan mithon");
    s.roll=19;
    s.age =21;


    printf("you name is :%s\nyour roll is:%d\nyour age is:%d",s.name,s.age,s.age);
    return 0;



}
