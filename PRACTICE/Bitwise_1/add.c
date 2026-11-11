#include <stdio.h>

int main()
{
	unsigned int a = 2;
	unsigned int b = 3;

	while(b) {
		//Find the carry bit
		unsigned int carry = a & b;

		//Add without carry
		a = a ^ b;

		b = carry << 1;
	}

	printf("Sum is 0x%x\n", a);

	return 0;
}
