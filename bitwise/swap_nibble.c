#include <stdio.h>

#define SWAP_NIBBLE(num) ((0xF0 & num) >> 4 | (0x0F & num) << 4)
int main()
{
	int num = 0x12;

	printf("After Swap nibble: 0x%x\n", SWAP_NIBBLE(num));
	return 0;
}
