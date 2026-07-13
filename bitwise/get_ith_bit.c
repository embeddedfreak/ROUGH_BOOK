#include <stdio.h>

#define GET_BIT(num, i) ((num >> i) & 1)
int main()
{
	unsigned int num = 0xF3;

	int i = 2;

	printf("Value at ith bit is %d\n", GET_BIT(num, i));
	return 0;
}
