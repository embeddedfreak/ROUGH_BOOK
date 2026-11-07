#include <stdio.h>

unsigned int msb_set(int num)
{
	num = num | (num >> 1);
	num = num | (num >> 2);
	num = num | (num >> 4);
	num = num | (num >> 8);
	num = num | (num >> 16);

	return num - (num >> 1);
}

int main()
{
	/*
	 * 1000 0000 0000 0000 0000 0000 0000 0000
	 * 0000 1000
	 * 0000 1111
	 * 0000 F - 7 = 8
	 *
	 * num >> 1 | num 
	 * 1100 0000 0000 0000 0000 0000 0000 0000
	 * 1111 0000 0000 0000 0000 0000 0000 0000 >> 2
	 * 1111 1111 0000 0000 0000 0000 0000 0000 >> 4
	 */

	//unsigned int num = 0x80000000;
	unsigned int num = 0x7000000;

	printf("Right most set bit number is %x\n", msb_set(num));
}
