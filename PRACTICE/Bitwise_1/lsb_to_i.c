#include <stdio.h>

int main()
{
	unsigned int num = 0xFFFFFFFF;
	/* 1111 1111
	 * i = 3
	 * 1111 0000
	 * i = 2
	 * 1111 1000
	 */
	int i = 4;
	unsigned int mask = ~((1U<<(i+1)) -1);
	num&=mask;

	printf("clearing lsb to ith bit num: %x\n", num);
}
