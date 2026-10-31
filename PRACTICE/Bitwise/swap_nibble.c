#include <stdio.h>

void swap_nibble(unsigned int *num)
{
	*num = (((*num & 0x0f0f0f0f) << 4) | ((*num & 0xf0f0f0f0) >> 4));
}

int main()
{
	unsigned int num = 0x73;
	//0111 0011
	
	//0011-3 0111-7
	
	swap_nibble(&num);

	printf("After nibble swap num = 0x%x\n", num);
	return 0;
}

