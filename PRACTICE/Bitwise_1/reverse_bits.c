#include<stdio.h>

unsigned int reverse_bits(unsigned int num)
{
	unsigned int rev = 0;

	for(int i = 0; i < 32; i++) {
		rev = (rev << 1) | (num & 1);
		num>>=1;
	}
	return rev;

}

int main()
{
	unsigned int num = 0x7;

	printf("Number after reverse : %x\n", reverse_bits(num));
	return 0;
}
