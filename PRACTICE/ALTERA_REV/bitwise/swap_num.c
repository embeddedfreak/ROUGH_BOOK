#include <stdio.h>

int main()
{
	unsigned int a = 2;
	unsigned int b = 3;

	a = a ^ b;//1
	b = a ^ b;//2
	a = a ^ b;//3
	
	printf("Number after swap is a = %d , b = %d\n", a, b);
	return 0;
}

