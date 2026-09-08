// lab class...01..
// branching statement
//if_else..

/*#include <stdio.h>
int main ()
{

    int x;
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("the number is even .");

    }
    else
    {
        printf("the number is an odd number .");
    */



// nested if else ...

/*#include <stdio.h>
    int main ()
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("a is large");
        }
        else
        {
            if(a<b)
            {
                printf("b is large ");
            }
            else
            {
                printf("they are qual");
            }

        }

    }*/

/*#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter your number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is large");
    }
    else if (a<b)
    {

        printf("b is large");
    }
    else
    {
        printf("they are equl");
    }

    return 0;
}*/

// input 3 number and find who is the large number ;

/*#include <stdio.h>
int main (){

int a,b,c;
printf("Enter three number :");
scanf("%d %d %d",&a,&b,&c);

if(a>b && a>c){
    printf("a is the large number .");

}else{
    if(b>a && b>c){
        printf("b is the large number .");
    }else if(c>a && c>b){
        printf("c is the large number .");
    }
    else {
        printf("They are equal .");
    }

}

return 0;


}*/

/*#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b || b==c)
    {
        printf("they are equal");
    }
    else if(a>=b || a>=c )
    {
        printf(" a is the large ");
    }
    else if(b>=a && b>=c)
    {
        printf(" b is the large ");
    }
    else
    {
        printf("they are equal");
    }
    return 0;

}*/


// wite a code input 5 element and find whices element is largest.

#include <stdio.h>
int main ()
{
    int a,b,c,d,e;

    printf("Enter your numbers:");
    scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);
    if(a=b || b==c || c==d || d==e)
    {
        printf("The are equal .");

    }
    else if(a>b || a>c || a>d || a>e)
    {
        printf("a is large" );
    }

    else if( b>a  || b>c||  b>d || b>e )


    {

        printf(" b is large ");

    }

    else if(  c>a ||  c>b  ||  c>d   ||     c>e    )
    {

        printf(" c is large ");
    }



    else if(  d>a ||   d>b ||d>c ||  d>d    )

    {
        printf(" d is large ");

    }


    else
    {
        printf("e is large ");
    }
    return 0;


}























