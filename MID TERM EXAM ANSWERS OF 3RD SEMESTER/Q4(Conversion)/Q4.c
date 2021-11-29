#include<stdio.h>
#include<string.h>
void itob(int n,char *s,int b)
{
    int i,r;
    for(i=0;n!=0;i++)
    {
        r=n%b;
        n=n/b;

        if(b!=16)
        {
            *(s+i)=r+'0';

        }
        else
        {
            if(r<=9)
            {
                *(s+i)=r+'0';    
            }
            else
            {
                *(s+i)=r+'A'-10;    
            }
        }
    }
printf("\n Final s :%s Final i:%d",strrev(s),i);
     //s[i]='\0';
}
void revstr(char *s,char *r)  
{  
    
    int i, len;
    char temp;  
    len = strlen(s);
    i=0;
    while(i<len) 
    {  
       
        temp = s[i];  
        s[i] = r[len];  
        r[len] = temp;  
        i++;
        len--;
    }
    r[i]='\0';
}


int main()
{
    char s[50],y[50];
    int n,i,b,rem,reverse=0;
    printf("enter the value if n:");
    scanf("%d",&n);
    printf("enter the value of b:");
    scanf("%d",&b);
    itob(n,s,b);
    
    revstr(s,y);
    printf("\n%s",s);
    
    return(0);
}
