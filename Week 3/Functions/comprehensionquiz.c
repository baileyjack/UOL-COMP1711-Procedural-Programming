#include <stdio.h>
int six = 6;

int Max (int a, int b)
{
  if (a>=b)
    return a;
  else
    return b;
}
int main ()
{
   printf ("%i\n" , Max (1,2) + Max (6,5) );
   printf ("%i\n", six);
   return 0;
}