#include <stdio.h>

unsigned int reverse_bit(int num)
{
	unsigned int rev_num = 0;

	for(int i = 0; i < 32; i++) {
		rev_num = (rev_num << 1) | (num & 1);
		num = num>>1;
	}
	return rev_num;
}

int main()
{
	unsigned int num = 0x7;


	printf("0x%x\n", reverse_bit(num));
	return 0;
}
