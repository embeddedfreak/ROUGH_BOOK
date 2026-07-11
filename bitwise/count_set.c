#include <stdio.h>

int main()
{
	int num = 0xf;
	int count = 0;

	while(num) {
		if(num & 1) 
			count++;
		num = num >> 1;
	}

	printf("Number of set bits are %d\n", count);
	return 0;
}
