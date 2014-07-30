#include <stdio.h>

int main(void)
{
	int a, b;
	int *x;
	a = 8;
	b = 9;

	x = &a;
	b = *x + 2;
	printf("The address of a is 0x%x\n",x);
	printf("The value of b is now %d\n",b);
	return 0;
}
