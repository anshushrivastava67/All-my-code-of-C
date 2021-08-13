// WAP to print the sum of first n natural numbers by using for loop
#include<stdio.h>
int main(){
    int i,sum=0,a,n;
    printf("how many n natural numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of %d natural number are : %d ",n,sum);
    return 0;
}
