#include <stdio.h>

int main()
{
	int num = 0x7;
	int i = 2;

	//0000 0000 0000 0000 0000 0000 0000 0111
	//0000 0000 0000 0000 0000 0000 0000 0011
	
	int mask = ((1 << i) -1) ;
	num&=mask;

	printf("Number is %x\n", num);
}
