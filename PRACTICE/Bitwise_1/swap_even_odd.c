#include<stdio.h>

int main()
{
	unsigned int num = 0x5;

	/*  0101
	 *  1010
	 */
	num = ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555) << 1);

	printf("After even odd swap number is %x\n", num);
	
	return 0;
}
