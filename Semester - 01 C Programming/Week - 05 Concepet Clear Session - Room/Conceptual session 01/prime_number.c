#include <stdio.h>
int is_prime(int p)
{ if(p==1)
        return 0;
    else if(p==2)
        return 1;
    else
    {
        for(int i=2; i<p; i++)
        {
            if(p%2==0)
                return 0;
        }
    return 1;
}
}
int main ()
{ int n,result;
scanf("%d",&n);
result= is_prime(n);
    if(result==1)
    { printf("%d prime number",n);
    }
else
    {
printf("%d composite number",n);
    }







}

