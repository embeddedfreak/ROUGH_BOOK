#include <stdio.h>

int main()
{
	unsigned int num = 0x4;

	int count = 0;
	while(num) {
		num = num >> 1;
		count++;
	}

	printf("Number should be divided %d times to make it 0\n", count);
	
	return 0;
}
