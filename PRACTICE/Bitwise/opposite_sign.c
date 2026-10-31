#include <stdio.h>

int main()
{
	int a = 10;
	int b = -20;

	if((a ^ b) < 0) {
		printf("signs of 2 numbers are opposite\n");
	} else {
		printf("Both numbers have same sign\n");
	}

	return 0;
}

