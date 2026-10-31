#include <stdio.h>
#include<math.h>


int find_setbit_pos(int num) {
	if(num == 0) return -1;

	if(num & 1) return 0;

	num = num & -num;
	int pos = 0;

	while((num&1) == 0) 
	{
		num = num>>1;
		pos++;
	}
	return pos;
}

int main()
{
	int num = 0x6;


	printf("position of rightmost setbit is %d\n", find_setbit_pos(num));
}
