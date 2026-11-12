#include <stdio.h>

int main()
{
	unsigned int num = 0x4;

	num = num & (-num);

	int idx = 0;
	while(num) {
		idx++;
		num>>=1;

	}

	printf("First set bit is at index %d\n", idx-1);
	return 0;
}
