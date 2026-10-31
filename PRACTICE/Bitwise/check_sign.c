#include <stdio.h>

int main()
{
	int num = -0x7;

	if(1 & (num>>31)) {
		printf("Sign is -\n");
	} else {
		printf("Sign is +\n");
	}
	return 0;
}
