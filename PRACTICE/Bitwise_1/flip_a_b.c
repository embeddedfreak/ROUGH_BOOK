#include <stdio.h>

int count_flip_bits(unsigned int a, unsigned int b)
{
	unsigned int flip_bits = a ^ b;

	int count = 0;

	while(flip_bits) {
		if(flip_bits & 1)
			count++;
		flip_bits>>=1;	
	}
	return count;
}

int main()
{
	unsigned int a = 3;
	unsigned int b = 1;
	/* 0000 0011
	 * 0000 0001
	 */

	printf("Number of bits to flip to make a to b is %d\n", count_flip_bits(a, b));

	return 0;
}
