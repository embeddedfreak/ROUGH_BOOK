#include <stdio.h>

int main()
{
	int num = 0xFFFFFFFF;
	/* 1111 1111
	 * i = 4
	 * 0000 1111
	 * i = 2
	 * 0000 0011
	 */
	int i = 4;
	int mask = ((1<<i) -1);
	num&=mask;

	printf("clearing msb to ith bit num: %x\n", num);
}
