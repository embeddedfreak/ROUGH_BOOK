#include <stdio.h>

#define CLEAR_BIT(num, bit) ((~(1U << bit)) & num)
#define SET_BIT(num, bit) ((1U << bit) | num)
#define TOGGLE_BIT(num, bit) ((1U << bit) ^ num)
#define CHECK_SET_BIT(num, bit) (!!((1U << bit) & num))

#define RIGHT_ROTATE(num, pos) (num >> (pos & 31U)) | (num << ((32-pos) & 31U))
#define LEFT_ROTATE(num, pos) (num << (pos & 31U)) | (num >> ((32-pos) & 31U))
int main()
{
	unsigned int num = 0x7;

	int i = 2;
	printf("Number after Clearing the bit %x\n", CLEAR_BIT(num, i));
	printf("Number after Set the bit %x\n", SET_BIT(num, i));
	printf("Number after Toggle the bit %x\n", TOGGLE_BIT(num, i));
	printf("Check if the bit is set %d\n", CHECK_SET_BIT(num, i));
	
	
	printf("After Right rotate:  %x\n", RIGHT_ROTATE(num, i));
	printf("After Left rotate:  %x\n", LEFT_ROTATE(num, i));


	return 0;
}
