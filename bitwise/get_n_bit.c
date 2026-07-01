#include <stdio.h>
/* This logic gives the masked value */
#if 0
int main() 
{
	int num = 5;

	int bit = 2;

	int mask = (1<<bit);

	printf("nth bit is: %d\n", (num & mask));
}

#endif

int get_nth_bit(int num, int bit)
{
	return ((num >> bit) & 1);
}

int main()
{
	int num = 5;
	int bit = 2;

	//find the bit is 1 or 0
	printf("nth bit is: %d\n", get_nth_bit(num, bit));
	return 0;
}
