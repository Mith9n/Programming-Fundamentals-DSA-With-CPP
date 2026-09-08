#include <stdio.h>
int add_two_number(n,m,x,y,t,u);

int main (){

int n,m;
scanf("%d %d",&n,&m);
int sum = add_two_number(n,m);
printf("The add value  is:%d\n",sum);

int x,y;
scanf("%d %d",&x,&y);
int summ = add_two_number(x,y);
printf("The add value  is:%d\n",summ);


int t,u;
scanf("%d %d",&t,&u);
int summm = add_two_number(t,u);
printf("The add value  is:%d",summm);

return 0;
}
int add_two_number(n,m,x,y,a,s){

    int sum ;

    sum =n+m;

    return sum;


}

