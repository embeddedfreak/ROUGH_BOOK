#include <stdio.h>

int main()
{
	int a = 10;
	int b = -10;

	if((a ^ b) < 0) 
	{
		printf("Both numbers have opposite sign\n");
	} else {
		printf("Both numbers have same sign\n");
	}
	return 0;
}
