#include <stdio.h>

int main()
{
	int num = 0x3;

	int rev = 0;
	for(int i = 0; i < 32; i++) {
		rev = (rev << 1) | (num & 1);
		num>>=1;
	}

	printf("Reverse number is %x\n", rev);
	return 0;
}
