#include <stdio.h>

void clear_msb_i(unsigned int *num, unsigned int i)
{
	unsigned int mask = (1U << i) - 1;
       //8-1 = 0x7 111	

	*num &= mask;
}

int main()
{
	unsigned int num = 0xFFFFFFFF;
	unsigned int i = 3;
	//0x0000007
	
	clear_msb_i(&num, i);

	printf("After clear msb to ith bit: 0x%x\n", num);

	return 0;
}
