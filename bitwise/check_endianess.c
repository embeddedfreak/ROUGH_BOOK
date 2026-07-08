#include <stdio.h>

int main()
{
	unsigned int x = 1;

	char *ptr = (char*) &x;

	if((*ptr & 0x1) == 1) {
		printf("This is little endian\n");
	} else {
		printf("This is Bigendian endian\n");
	}
	return 0;
}
