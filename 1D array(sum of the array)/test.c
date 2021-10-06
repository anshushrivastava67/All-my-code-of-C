#include <stdio.h>

int main()
{
    int a[1000],i,sum=0,n;
    i=0;
    
    scanf("%d",&n);
    while(i<n){
        
        scanf("%d",&a[i]);
        sum=sum+a[i];
        i+=1;
    }
printf("%d",sum);    

    return 0;
}
