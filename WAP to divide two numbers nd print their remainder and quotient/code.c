#include<stdio.h>
int main(){
    int a,s,d,f;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&s);
    d=a%10;
    f=a/10;
    printf("Remainder of %d and %d is:%d ",a,s,d);
    printf("\nQuotient of %d and %d is:%d",a,s,f);
}
