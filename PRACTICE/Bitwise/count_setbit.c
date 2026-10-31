#include <stdio.h>

int count_setbit(int num)
{
	int count = 0;
	while(num > 0) {
		num = num & (num -1);
		count++;
	}

	return count;
}

int main()
{
	int num = 0x7;

	printf("Set bits are: %d\n", count_setbit(num));
	return 0;
}
