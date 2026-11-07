#include <stdio.h>

int mini(int a, int b)
{
	int diff = a - b;//-1
	int sign = ((diff>>31) & 1)? -1: 1;

	return b - (diff*sign);
}

int maxi(int a, int b)
{
        int diff = a - b;//1
        int sign = ((diff>>31) & 1)? -1: 1;

        return a + (diff*sign);
}

int main()
{
	int a = 2;
	int b = 3;

	printf("Minimum of 2 numbers is %d\n", mini(a, b));
	printf("Maximum of 2 numbers is %d\n", maxi(a, b));

	return 0;
}
