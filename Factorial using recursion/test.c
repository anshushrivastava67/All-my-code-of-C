#include <stdio.h>
int recur (int p)
{
  int f;
  if (p == 1)
    {
      return (1);

    }
  else
    {
      f = p * recur (p - 1);
    }
  return f;

}

int main ()
{
  int a, p;
  printf ("Enter A ");
  scanf ("%d", &a);
  p = recur (a);
  printf ("%d", p);

  return 0;
}

