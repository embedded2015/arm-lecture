/* This file is part of the examples given in the slide.
 * For educational use as part of the Intro to ARM course at http://www.opensecuritytraining.info/IntroARM.html .
 */
#include <stdio.h>

int orr(int a, int b);

int main(void)
{
  int a, b, x, d;
  a = 221412523;
  b = 374719560;

  asm("mrs %[result], apsr" : [result] "=r" (x) : );

  d = orr(a,b);

  printf("a | b is %d\n", d);
  printf("Before operation, apsr was %x\n",x);

  asm("mrs %[result], apsr" : [result] "=r" (x) : );
  printf("After operation, apsr was %x\n",x);

  return 0;
}

int orr(int a, int b)
{
  return (a|b);
}
