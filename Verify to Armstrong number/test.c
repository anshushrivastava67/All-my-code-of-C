
#include <stdio.h>

int main ()
{
  int a, d, p;
  int sum = 0;
  printf ("Enter Number: ");
  scanf ("%d", &a);
  p = a;
  while (a)
    {
      d = a % 10;
      sum = sum + (d * d * d);
      a = a / 10;

    }
  if (sum == p)
    {
      printf ("It is an Armstrong Number");
    }
  else
    {
      printf ("Not an Armstrong Number");
    }

  return 0;
}

