#include <stdio.h>

int main()
{
	int num = 0x8;

	int count = 0;
	while(num != 0) {
		num>>=1;
	count++;	
	}

	printf("Total number of times %d should be divided by 2 is %d\n", num, count);

	return 0;
}
