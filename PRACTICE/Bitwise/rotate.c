#include <stdio.h>
#include <stdint.h>

#define RIGHT_ROTATE(num, i) ((num >> i) | (num << (32 - i)))
#define LEFT_ROTATE(num, i) ((num << i) | (num >> (32 - i)))
//00 00 00 07
//C0 00 00 01
//f0 00 00 00
//c0 00 00 03

int main()
{
	uint32_t num = 0x7;
	uint32_t num1 = 0xf0000000;

	printf("Rotate right 0x%x\n", RIGHT_ROTATE(num, 2));
	printf("Rotate left 0x%x\n", LEFT_ROTATE(num1, 2));
	return 0;
}
