#include <stdio.h>

int main()
{
	int num = 0x6;

	int mask = ~(num & (-num));
	/* 0110
	 * 1010
	 * 0010
	 *
	 */

	num &=mask;

	printf("After clearing the last set bit num = %x\n", num);
	return 0;
}
