#include<stdio.h>

unsigned int reverse_bits(unsigned int num)
{
	num = ((num & 0x0000FFFF) << 16) | ((num & 0xFFFF0000) >> 16);
	num = ((num & 0x00FF00FF) << 8) | ((num & 0xFF00FF00) >>8);
	num = ((num & 0x0F0F0F0F) << 4) | ((num & 0xF0F0F0F0) >>4);
	num = ((num & 0x33333333) << 2) | ((num & 0xCCCCCCCC) >>2);
	num = ((num & 0x55555555) << 1) | ((num & 0xAAAAAAAA) >>1);

	return num;

}

int main()
{
	unsigned int num = 0x7;

	printf("Number after reverse : %x\n", reverse_bits(num));
	return 0;
}
