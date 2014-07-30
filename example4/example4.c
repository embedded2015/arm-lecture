#include <stdio.h>

int multiply(int a, int b);

int main(void)
{
	int a, b, d;
	a = 221412523;
	b = 3;
	d = multiply(a,b);
	printf("a * b is %d\n", d);

	return 0;
}

int multiply(int a, int b)
{
	return (a*b);
}
