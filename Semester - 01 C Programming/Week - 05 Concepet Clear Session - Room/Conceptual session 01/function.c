#include <stdio.h>

int my_gcd(int x,int y){

    for(int i=x; i>=1;i--){

        if(x%i==0 && y%i==0)
        {

            return i;
        }

    }

}




int main (){

int a,b;
scanf("%d %d",&a,&b);

int result = my_gcd(a,b);

printf("The GCD is :%d",result);

return 0;


}
