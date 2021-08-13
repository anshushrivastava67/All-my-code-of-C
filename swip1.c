#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("Before Swaping:a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swiping:a=%d and b=%d",a,b);
    return (0);
}