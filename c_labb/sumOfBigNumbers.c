#include <stdio.h>
#include <stdlib.h>

struct BigNumber {
  int digit;
  struct BigNumber *next;
};

typedef struct BigNumber BigNumber;

int main ()
{
  int a, b, s;
  printf ("Mata in ett stort tal (t.ex:2147483647):");
  scanf ("%d", &a);
  printf ("Mata in talet 1:");
  scanf ("%d", &b);
  s = a + b;
  printf ("summan av %d och %d blir: %d\n", a, b, s);
}
