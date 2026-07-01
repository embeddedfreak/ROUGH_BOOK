#include <stdio.h>

#define SET_BIT(num, bit) (num | (1<<bit))

#define CLEAR_BIT(num, bit) (num & ~(1<<bit))

#define TOGGLE_BIT(num, bit) (num ^ (1<<bit)) 
int main()
{
	int num = 5;
	int sbit = 1;
	int cbit = 2;
	int tbit = 0;

	printf("Number after bit is set is %d\n", SET_BIT(num, sbit));
	printf("Number after bit is clearing bit is %d\n", CLEAR_BIT(num, cbit));
	printf("Number after bit is Toggled bit is %d\n", TOGGLE_BIT(num, tbit));
}
