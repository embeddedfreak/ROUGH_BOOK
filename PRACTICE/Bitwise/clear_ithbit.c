#include <stdio.h>

int main()
{
	int num = 0x6;//0110
	int i_bit = 1;

	int mask = ~(1<<i_bit);

	num = num & mask;

	printf("After ith bit is cleared %d\n", num);

	return 0;
}
