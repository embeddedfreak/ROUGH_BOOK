#include<stdio.h>

int main()
{
	unsigned int num = 0x3;

	/*  0011
	 *  00110000
	 */
	num = ((num & 0x0F0F0F0F) << 4) | ((num & 0xF0F0F0F0) >> 4);

	printf("After nibble swap num: %x\n", num);
	
	return 0;
}
