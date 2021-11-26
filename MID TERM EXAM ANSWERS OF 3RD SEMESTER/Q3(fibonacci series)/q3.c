#include <stdio.h>
int fib(int i)
{
if(i==1)
{
return(0);    
}
if(i==2)
{
return(1);    
}
return(fib(i-1)+fib(i-2));
}
int main()
{
    int i ;
    scanf("%d",&i);
    if(i>=1)
    {
        printf("fib=%dth is %d",i,fib(i));
    }
    else
    {
    printf("Wrong input");    
    }
    return(0);
}
