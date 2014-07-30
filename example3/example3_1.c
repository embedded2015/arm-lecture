#include <stdio.h>

int multiplybytwo(int a);

int main(void)
{
	int a, b, d;
	a = -6;
	b = 8;
	d = multiplybytwo(a) * multiplybytwo(b);
	printf("2a * 2b is %d\n", d);

	return 0;
}

int multiplybytwo(int a)
{
	return a*2;
}
