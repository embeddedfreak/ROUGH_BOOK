#include <stdio.h>

int min(int a, int b)
{
	int diff = a-b;
	int sign = (diff>>31) & 1;

	return b + (sign*diff);
}

int max(int a, int b)
{
        int diff = a-b;
        int sign = (diff>>31) & 1;
	
	return a - (sign*diff);
}

int main()
{
	int a = 4, b = 2;

	printf("Minimum is %d\n", min(a,b));
	printf("Maximum is %d\n", max(a,b));
	return 0;
}
