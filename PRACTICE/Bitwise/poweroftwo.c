#include <stdio.h>

int main()
{
	int num = 0x7;

	if(num & (num -1)) {
		printf("Number is not power of 2\n");
	} else {
		printf("Number is power of 2\n");
	}


	return 0;
}
