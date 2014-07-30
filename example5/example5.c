#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

int main(void)
{
	int a, b, x, d;
	a = 8;
	b = 9;

	asm("mrs %[result], apsr" : [result] "=r" (x) : );

	d = (a ^ b) > 0 ? add(a,b) : subtract(b,a);

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
