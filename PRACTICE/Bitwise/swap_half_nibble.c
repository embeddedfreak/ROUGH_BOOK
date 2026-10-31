#include <stdio.h>

void swap_halfnibble(unsigned int *num)
{
	*num = (((*num & 0x33333333) << 2) | ((*num & 0xCCCCCCCC) >>2));
}

int main()
{
	unsigned int num = 0x73;
	//0111 0011
	
	//1101-D 1100-C
	
	swap_halfnibble(&num);

	printf("After half nibble bits swap num = 0x%x\n", num);
	return 0;
}

