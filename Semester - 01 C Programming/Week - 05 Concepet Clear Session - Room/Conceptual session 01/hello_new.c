#include <stdio.h>

struct student {

    char name[30];
    int roll;
    int age;
    char blood_group[5] ;
};
int main (){

    struct student s;
    struct student s1={.name="limon",.roll=199,.age=23,.blood_group="A+"} ;

    printf("%s:\n%d\n")


    strcpy(s.name,"Maruf Hasan");
    s.roll=19;
    s.age=21;
    strcpy(s.blood_group,"b+");

    printf("student name:%s\nstudent roll:%d\nstudent age:%d\nstudent blood_group;%s",s.name,s.roll,s.age,s.blood_group);




}

