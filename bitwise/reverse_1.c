#include <stdio.h>

int main()
{
	int num = 0x00000003;

	/* half word reverse */
	num = ((num & 0xffff0000) >> 16) | ((num & 0x0000ffff) << 16);
	/* Byte reverse */
	num = ((num & 0xff00ff00) >> 8) | ((num & 0x00ff00ff) << 8);
	/* Nibble Reverse */
	num = ((num & 0xf0f0f0f0) >> 4) | ((num & 0x0f0f0f0f) << 4);
	/* 2 bits reverse */
	num = ((num & 0xcccccccc) >> 2) | ((num & 0x33333333) << 2);
	/* 1 bit reverse */
	num  = ((num & 0xaaaaaaaa) >> 1) | ((num & 0x55555555) << 1);

	printf("Number after reversing is 0x%x\n", num);

	return 0;
}
