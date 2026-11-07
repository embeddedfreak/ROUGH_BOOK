#include <stdio.h>

int main()
{
	int a = 0x7;
	int b = -0x7;

	if(((a ^ b) < 0)) {
		printf("Numbers have opposite sign\n");
	} else {
		printf("Numbers have same sign\n");
	}

	return 0;
}
