#include<stdio.h>
void hist(char *s)
{
    int freq[26],i,j;
    for(i=0;i<26;i++)
    {
        freq[i]=0;    
    }
    for(i=0;s[i]!='\0';i++)
    {
        freq[s[i]-'a']=freq[s[i]-'a']+1;
//printf("\t %c %d incremented by one",s[i],s[i]-'a');    
    }
    for(i=0;i<26;i++)
    {                                                  
        if(freq[i]!=0) printf("\n");
        for(j=0;j<freq[i];j++)
        {
            printf("*");    
            if(j==freq[i]-1)
              printf("%c",'a'+i);
        }
        
    }
}
int main()
{
    char s[50],i;
    
    printf("enter the string:");    
    scanf("%[^\n]",s);
    hist(s);
    return(0);
}
