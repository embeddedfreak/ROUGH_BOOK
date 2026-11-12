#include <stdio.h>

int main()
{
	unsigned int num = 0x7;
	// 0000 0111
	// 0000 1101 -> D
	
	num = ((num & 0x33333333) << 2) | ((num & 0xCCCCCCCC) >> 2);

	printf("Number after swap even odd is 0x%x\n", num);
	return 0;
}

