#include <stdio.h>
//Without using shift operator
//Brian Kernighan

int main()
{
	unsigned int num = 0x7;

	int count = 0;

	while(num) {
		num = num & (num -1);
		count++;
	}

	printf("Number of set bits are %d\n", count);

	return 0;
}
