#include <stdio.h>

int main()
{
	int num = 0x3;

	int rev = 0;

	for(int i = 0; i < 32; i++) {
	
		int bit = num & 1;
		rev = ((rev << 1) | bit);
		num = num >> 1;
	}
	printf("Reversed number is 0x%x\n", rev);
	return 0;
}
