#include <stdio.h>
int main()
{
	unsigned int num = 11010;

	unsigned int dec = 0;
	unsigned int val = 1;
	int dig;

	while(num) {
		dig = num % 10;
		if(dig == 1)
			dec+=val;  	
		val*=2;

		num/=10;
		
	}

	printf("Decimal equalent of is : %d\n", dec); 
	return 0;
}
