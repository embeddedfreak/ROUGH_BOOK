#include <stdio.h>

int main()
{
	int num = 0x6;//0110
	int i_bit = 0;

	num ^= (1<<i_bit);

	printf("After ith bit is toggled %d\n", num);

	return 0;
}
