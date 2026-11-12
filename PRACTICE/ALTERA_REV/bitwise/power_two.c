#include <stdio.h>

int main()
{
	unsigned int num = 0x4;

	if(num & (num -1) != 0) {
		printf("Number is not power of 2\n");
	} else {
		printf("Number is power of 2\n");
	}
	return 0;
}
