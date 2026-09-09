#include <stdio.h>

int main()
{
	int num = 10;

	if(num & 1) {
		printf("Number %d is odd\n", num);
	} else {
		printf("Number %d is even\n", num);
	}

	return 0;
}
