#include <stdio.h>

int main()
{
	unsigned int num = 0x7;
	// 0000 0111
	// 0111 0000 -> 70
	
	num = ((num & 0x0F0F0F0F) << 4) | ((num & 0xF0F0F0F0) >> 4);

	printf("Number after nibbble swap is 0x%x\n", num);
	return 0;
}

