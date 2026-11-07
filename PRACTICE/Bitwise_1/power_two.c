#include <stdio.h>

int main()
{
	//unsigned int num = 0x8;
	unsigned int num = 0x3;

	if(num & (num -1)) {
		printf("The num is not power of 2\n");
	} else {
		printf("The num is power of 2\n");
	}
	return 0;
}
