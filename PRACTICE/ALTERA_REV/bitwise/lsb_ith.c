#include <stdio.h>

int main()
{
	int num = 0xF;
	int i = 2;

	//0000 0000 0000 0000 0000 0000 0000 1111
	//0000 0000 0000 0000 0000 0000 0000 1000
	
	int mask = ~((1 << (i+1)) -1);
	num&=mask;

	printf("Number is %x\n", num);
}
