#include <stdio.h>


void clear_nth_bit(int* num, int bit)
{
	*num &=  ~(1<<bit);
}

int main()
{
	int num = 5;
	int bit = 2;

	clear_nth_bit(&num, bit);
	printf("Number after clearing %d bit: %d\n", bit, num);
	return 0;
}
