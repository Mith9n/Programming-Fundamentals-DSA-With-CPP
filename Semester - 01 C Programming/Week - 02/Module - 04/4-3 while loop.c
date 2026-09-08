// 3n+1 problem...

/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter your Number :");
    scanf("%d",&n);
     if(n%2==0){

            n=n/2;
     }
     else{
        n=3*n+1;
     }

     printf("The soloution is:%d",n);
     return 0;
}*/

#include <stdio.h>
int main ()
{

    int n,a;
    printf("Enter your number :");
    scanf("%d",&n) ;
  for(;n!=1;)
    {

        if (n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        printf("the scerise is :%d\n",n);

    }
    return 0;


}

