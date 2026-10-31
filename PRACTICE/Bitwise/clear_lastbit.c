#include <stdio.h>

int main()
{
	int num = 0x6;//0110

	num &= ~(num & (-num));

	printf("After last bit is cleared %d\n", num);

	return 0;
}
