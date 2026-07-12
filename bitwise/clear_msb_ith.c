#include <stdio.h>

int main()
{
	unsigned int num = 0xF;
	unsigned int i = 2;
	int mask = ((1 << (i + 1)) -1);

	num = num & mask;

	printf("Clearing till %u position: 0x%x\n", i, num);
	return 0;
}
