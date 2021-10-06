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
