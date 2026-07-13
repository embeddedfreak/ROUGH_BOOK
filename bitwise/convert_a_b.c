#include <stdio.h>

int main()
{
	unsigned int a = 8;
	unsigned int b = 7;

	unsigned int xor = a ^ b;

	int count = 0;

	while(xor) {
		if(xor & 1) {
			count++;
		}
		xor>>=1;
	}

	printf("Total number of bits to convert a(%u) to b(%u) is %d\n", a, b, count);


	return 0;
}
