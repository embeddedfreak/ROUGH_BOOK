#include <stdio.h>
#include <stdbool.h>

bool check_endianess()
{
	int num = 1;
	unsigned char* ptr = (unsigned char*) &num;

	if(*ptr == 1) {
		return true;
	} 
	
	return false;
}

int main()
{
	if(check_endianess()) {
		printf("Little Endian\n");
	} else {
		printf("Big Endian\n");
	}
	return 0;
}
