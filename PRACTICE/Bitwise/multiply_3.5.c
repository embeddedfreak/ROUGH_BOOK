#include <stdio.h>

int main()
{
	int num = 20;

	printf("After multiplying by 3.5, number is %d\n", (num << 1) + num + (num >> 1));
	return 0;
}
