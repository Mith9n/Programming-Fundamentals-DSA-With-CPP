#include <stdio.h>
int main ()
{

    int n,sum=0,w;
    printf("Enter your pessenger :");

    scanf("%d",&n);

    for (int i=0;i<=n;i++){

        scanf("%d",&w);
        sum+=w;
    }
printf("The pessenger wight is :%d",w);
return 0;
}
