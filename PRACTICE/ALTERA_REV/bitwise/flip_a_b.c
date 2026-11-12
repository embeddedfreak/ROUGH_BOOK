#include <stdio.h>

int main()
{
	unsigned int a = 3;
	unsigned int b = 2;
	/* 0000 0011
	 * 0000 0010
	 */


	unsigned int num = a ^ b;
	//0000 0001
	int count = 0;
	while(num)  {
		num = num & (num -1);
		count++;
	}

	printf("The number of bits to be fliped to make a to b are %d\n", count);

}
