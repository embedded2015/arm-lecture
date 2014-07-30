#include <stdio.h>

int dividebytwo(int a);

int main(void)
{
	int a, b, d;
	a = -6;
	b = 8;
	d = dividebytwo(a) / dividebytwo(b);
	printf("a/2 / b/2 is %d\n", d);

	return 0;
}

int dividebytwo(int a)
{
	return a/2;
}
