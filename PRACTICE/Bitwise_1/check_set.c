#include <stdio.h>

int main()
{
	unsigned int num = 0xc;

	int bit = 3;

	if(num & (1<<bit)) {
		printf("Bit is set\n");	
		int mask = ~(1<<bit);
		num = num & mask;
	} else {
		printf("Bit is not set\n");	
	}

	printf("After clearing bit the num is %d\n", num);

	return 0;
}
