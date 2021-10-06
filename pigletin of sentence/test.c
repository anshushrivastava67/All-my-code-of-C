Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@anshushrivastava67 
Mohit-Jakhar
/
Introduction-to-C-Programming
Public
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Introduction-to-C-Programming/Piglatin of a sentence/test.c
@Mohit-Jakhar
Mohit-Jakhar Create test.c
Latest commit 2a45453 6 hours ago
 History
 1 contributor
29 lines (27 sloc)  567 Bytes
   
#include <stdio.h>
int main()
{
  char t[80], b[100];
  int pcount = 1, qcount = 0,pfirst=0;
  printf ("Enter string: ");
  scanf ("%[^\n]", t);
  while(t[pcount]!='\0')
    if(t[pcount]!=' ')
        b[qcount++]=t[pcount++];
    else
    {

        b[qcount++]=t[pfirst];
        b[qcount++]='a';
        b[qcount++]=' ';
        pfirst=pcount+1;
        pcount=pcount+2;
    }
    b[qcount++]=t[pfirst];
    b[qcount++]='a';
    b[qcount++]=' ';
    pfirst=pcount+1;
    pcount=pcount+2;
    b[qcount]='\0';
    
    printf ("Output is:%s", b);    
    return 0;
}
