#include <stdio.h>

int main()
{
	int num = 0x3;
	int rev = 0;
	for(int i = 0; i < 32; i++) {
		int bit = num % 2;
		rev = rev * 2 + bit;
		num = num / 2;
	}

	printf("After reverse number is 0x%x\n", rev);
	return 0;
}
