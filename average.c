#include<stdio.h>
int main(){
    float i,sum,average,a,s,n;
    printf("Enter how many numbers:");
    scanf("%f",&n);
    for(i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%f",&a);
        sum=sum+a;
    }
    average=sum/n;
    printf("Average of the %f numbers are:%f",n,average);
    return 0;
}