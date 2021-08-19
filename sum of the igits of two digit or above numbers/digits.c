#include <stdio.h>

int main() {
    int a,b,sum=0;
    printf("enter the two or above digits number: ");
    scanf("%d",&a);
    while (a>0){
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("sum of the digits are:%d",sum);
    return 0;
}
