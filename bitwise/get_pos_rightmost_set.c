#include<stdio.h>

int get_pos_right_set(int num) 
{
	int pos = 0;
	while((num & 1) == 0) {
		pos++;
		num = num >> 1;
	}
	return pos;

}

int main()
{
	int num = 8;
	printf("position of rightmost set bit is %d\n", get_pos_right_set(num));

	return 0;
}
