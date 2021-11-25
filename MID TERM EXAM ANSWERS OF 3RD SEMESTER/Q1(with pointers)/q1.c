#include <stdio.h>

int main()
{
    char str[50],*p;
    int count=0;
    scanf("%[^\n]c",str);
    p=str;
    while(*p!='\0')
    {
    if(*p==' '||*p=='\t'||*p=='\n')
    {
    count++;    
    }
    p++;
    }
    printf("Total spaces,tabs,new line:%d",count);
    return 0;
}
