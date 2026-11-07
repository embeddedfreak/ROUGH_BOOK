#include<stdio.h>

int main()
{
	unsigned int num = 0x3;

	/*  0011
	 *  1100
	 */
	num = ((num & 0xCCCCCCCC) >> 2) | ((num & 0x33333333) << 2);

	printf("After half nibble swap num: %x\n", num);
	
	return 0;
}
