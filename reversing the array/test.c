#include<stdio.h>
int main(){
    int n,i,a[1000];
    printf("enter how many numbers are u want in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the numbers:");
        scanf("%d",&a[i]);
        
    }
    printf("Reversed array is:");
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }
    
    return(0);
}
