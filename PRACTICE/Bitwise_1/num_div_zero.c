#include <stdio.h>


int main()
{
	unsigned int num = 0x8;

	int count = 0;
	while(num) {
		count++;
		num>>=1;
	}
	printf("Number of times num should be / by 2 to make it 0 is %d\n", count);
	return 0;
}
