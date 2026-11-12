#include <stdio.h>

#define SET_BIT(num, pos) ((1U << pos) | (num))
#define CLEAR_BIT(num, pos) ((~(1U << pos)) & (num))
#define TOGGLE_BIT(num, pos) ((1U << pos) ^ (num))
#define CHECK_SET(num, pos) (!!((1U << pos) & num))

#define RIGHT_ROTATE(num, pos) (num >> ((pos) & 31U)) | (num << ((32U - pos) & 31U))
#define LEFT_ROTATE(num, pos) (num << ((pos) & 31U)) | (num >> ((32U - pos) & 31U))
int main()
{
	unsigned int num = 0x7;

	printf("Set bit: %x\n", SET_BIT(num, 3));
	printf("Clear bit: %x\n", CLEAR_BIT(num, 2));
	printf("Toggle bit: %x\n", TOGGLE_BIT(num, 3));
	printf("Check set: %d\n", CHECK_SET(num , 2));

	printf("Right Rotate: %x\n", RIGHT_ROTATE(num , 2));
	printf("Left Rotate: %x\n", LEFT_ROTATE(num , 2));
	return 0;
}
