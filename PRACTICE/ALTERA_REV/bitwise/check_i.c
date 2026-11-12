#include <stdio.h>

int main()
{
	unsigned int num = 0x7;

	unsigned int i = 2;

	if(num & (1 << i)) {
		printf("ith bit is set\n");
	} else {
		printf("ith bit is not set\n");
	}
}
