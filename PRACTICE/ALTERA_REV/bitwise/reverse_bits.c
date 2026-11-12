#include <stdio.h>
/*
unsigned int reverse_bit(unsigned int num)
{
	unsigned int rev = 0;

	for(int i = 0; i < 32; i++)  {
		rev = (rev << 1) | (num & 1);
		num>>=1;
	}

	return rev;
}
*/
/*
unsigned int reverse_bit(unsigned int num) 
{
	unsigned int rev = 0;

	for(int i = 0; i < 32; i++) {
		unsigned int bit = num % 2;
		rev = (rev << 1) | bit;
		num = num / 2;
	}
	return rev;
}
*/

unsigned int reverse_bit(unsigned int num) 
{
	num = ((num & 0xFFFF0000) >> 16) | ((num & 0x0000FFFF) << 16);
	num = ((num & 0xFF00FF00) >> 8) | ((num & 0x00FF00FF) << 8);
	num = ((num & 0xF0F0F0F0) >> 4) | ((num & 0x0F0F0F0F) << 4);
	num = ((num & 0xCCCCCCCC) >> 2) | ((num & 0x33333333) << 2);
	num = ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555) << 1);

	return num;
}

int main()
{
	unsigned int num = 0x8;

	printf("reversed bit are %x\n", reverse_bit(num));
	return 0;
}
