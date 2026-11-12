#include <stdio.h>

int max_num(int a, int b)
{
	int diff = a - b; 
	int sign = (diff >> 31) & 1;

	return a - (diff * sign);
}

int min_num(int a, int b)
{
        int diff = a - b; //-1
        int sign = (diff >> 31) & 1; 

        return b + (diff * sign);
}


int main()
{
	int a = 2;
	int b = 3;

	printf("Min number is %d\n",  min_num(a,b));
	printf("Max number is %d\n",  max_num(a,b));

	return 0;
}
