#include <stdio.h>

void swap_evenodd(unsigned int *num)
{
	*num = (((*num & 0x55555555) << 1) | ((*num & 0xAAAAAAAA) >>1));
}

int main()
{
	unsigned int num = 0xa6;
	//1010 0110
	
	//0101-5 1001-9
	
	swap_evenodd(&num);

	printf("After even odd bits swap num = 0x%x\n", num);
	return 0;
}

