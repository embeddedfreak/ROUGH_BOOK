#include <stdio.h>

int main()
{
	int num = 0x6;//0110
	int i_bit = 1;

	int mask = (1<<i_bit);

	if((num & mask)) {
		printf("ith bit is set\n");
	} else {
		printf("ith bit is not set\n");
	}
	return 0;
}
