#include <stdio.h>

int and(int a, int b);

int main(void)
{
  int a, b, x, d;
  a = 221412523;
  b = 374719560;

  asm("mrs %[result], apsr" : [result] "=r" (x) : );

  d = and(a,b);

  printf("a & b is %d\n", d);
  printf("Before operation, apsr was %x\n",x);

  asm("mrs %[result], apsr" : [result] "=r" (x) : );
  printf("After operation, apsr was %x\n",x);

  return 0;
}

int and(int a, int b)
{
  return (a&b);
}
