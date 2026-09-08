#include <stdio.h>

struct student
{

    char  name[50];
    int  student_id;
    int student_roll;
    int student_age;
    char student_blood_group[5];




};

int main ()
{

    struct student s;

    strcpy(s.name,"maruf");
    s.student_id=128411;
    s.student_roll=201854;
    s.student_age=19;
    strcpy (s.student_blood_group,"b+");;;

    printf("name=%s\nstudent_id = %d\nstudent_roll = %d\nstudent_age = %d\nstudent_blood_group = %s",
           s.name, s.student_id, s.student_roll, s.student_age, s.student_blood_group);
    printf("\n");

    getchar();




}
