 #include <stdio.h>
 int main(){
int a=0,b=1,n,t=2,c;
printf("enter the digits:");
scanf("%d",&n);
printf("%d",a);
printf("\t%d",b);
while (t<n){
    c=a+b;
    printf("\t%d",c);
    a=b;
    b=c;
    t+=1;
     }
     return 0;
 }
