#include <stdio.h>
int main()
{
	unsigned int num = 0x7;

	int count = 0;
	while(num) {
		if(num & 0x1) {
			count++;
		}
		num>>=1;
	}

	printf("Total number of set bits are %d\n", count);
}
