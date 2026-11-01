#include <stdio.h>

int main()
{
	int a = 2;
	int b = 3;

	//find min
	int diff = a - b;
	int sign = (diff >> 31) & 1;

	//diff = -1
	//sign = 1
	printf("Maximum is %d\n", (a -(diff*sign)));
	printf("Minimum is %d\n", (b +(diff*sign)));
}
