#include<stdio.h>
#include<stdlib.h>
int strindex(char *p , char t)
 {
int index=-1 ,i=0;

    while(*p!='\0')
    {
        
        if(*p==t)
        {
        index=i;
        }
        i++;
        p++;
    }
    return(index);
}

int main()
{
    char str[80],t;
    
    printf("\n Enter Char : ");scanf("%c",&t);
    fflush(stdin);
    printf("\n Enter String : "); scanf("%[^\n]",str);
    
    printf("Position is %d",strindex(str,t));
    return(0);

}
