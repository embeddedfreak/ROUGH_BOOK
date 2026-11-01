#include <stdio.h>

#define SET_BIT(num, pos) (num | (1<<pos))
#define CLEAR_BIT(num, pos) (num & (~(1<<pos)))
#define TOGGLE_BIT(num, pos) (num ^ (1<<pos))
#define CHECK_BIT_SET(num, pos) (!!(num & (1<<pos)))
int main()
{
	int num = 0x7;

	printf("After set bit 0x%x\n", SET_BIT(num, 3));	
	printf("After clear bit 0x%x\n", CLEAR_BIT(num, 1));	
	printf("After Toggle bit 0x%x\n", TOGGLE_BIT(num, 2));	
	printf(" bit is %d\n", CHECK_BIT_SET(num, 3));	
	return 0;
}
