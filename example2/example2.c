#include <stdio.h>

extern int multiply(int a, int b);
extern int multiplyadd(int a, int b, int c);
extern int multiplysub(int a, int b, int c);

int main(void)
{
	int a, b, c, d;
	a = 10;
	b = 14;
	c = 3;
	d = multiply(a,b);
	printf("a * b is %d\n", d);
	d = multiplyadd(a,b,c);
	printf("a * b + c is %d\n", d);
	d = multiplysub(a,b,c);
	printf("c - a * b is %d\n", d);

	return 0;
}
