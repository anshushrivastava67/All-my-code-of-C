#include <stdio.h>

int main()
{
    char str[50];
    int count=0,p=0,count2=0,count1=0;
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
        if(str[i]=='\t')
        {
            count1++;
        }
        if(str[i]=='\n')
        {
            count2++;
        }
    }
    printf("spaces:%d or new line:%d and tab:%d",count,count2,count1);

    return 0;
}
