#include <stdio.h>

int
main ()
{
  char t[80], b[100];
  int pcount = 0, qcount = 0;
  printf ("Enter string: ");
  scanf ("%s", t);
  for (pcount = 1, qcount = 0; t[pcount] != '\0'; pcount++, qcount++)
    b[qcount] = t[pcount];
  b[qcount++] = t[0];
  b[qcount++] = 'a';
  b[qcount] = '\0';
  printf ("Output is:%s", b);
  return 0;
}
