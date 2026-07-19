#include <stdio.h>
//Problem is if we give 0b it takes decimal and already converts it into decimal.
//So no use of the logic.
//Take num a 1010 and not 0b1010
//
int main()
{
	unsigned int num = 0b1010;

	unsigned int dec = 0;
	unsigned int val = 1;
	while(num) {
		if(num & 1U) {
			dec+=val;  	
		}
		val*=2;
		num>>=1;
		
	}

	printf("Decimal equalent of is : %d\n", dec); 
	return 0;
}
