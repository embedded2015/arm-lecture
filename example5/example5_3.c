/* This file is part of the examples given in the slide.
 * For educational use as part of the Intro to ARM course at http://www.opensecuritytraining.info/IntroARM.html .
 */
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

int main(void)
{
  int a, b, x, d;
  a = 8;
  b = 9;

  asm("mrs %[result], apsr" : [result] "=r" (x) : );

  if((a ^ b) > 0)
    d = add(a,b);
  else
    d = subtract(b,a);

  printf("a & b is %d\n", d);
  printf("Before operation, apsr was %x\n",x);

  asm("mrs %[result], apsr" : [result] "=r" (x) : );
  printf("After operation, apsr was %x\n",x);

  return 0;
}

int add(int a, int b)
{
  return (a+b);
}

int subtract(int a, int b)
{
  return (a-b);
}
