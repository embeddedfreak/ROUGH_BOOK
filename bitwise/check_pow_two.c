#include <stdio.h>

int main()
{
	int num = 3;

	if(num && !(num & (num-1))) {
		printf("Number %d is power of 2\n", num);	
	} else {
		printf("Number %d is not power of 2\n", num);
	}
	return 0;
}
