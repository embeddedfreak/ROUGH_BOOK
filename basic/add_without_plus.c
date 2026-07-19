#include <stdio.h>

int main()
{
	int a = 1;
	int b = 5;

	while(b!=0) {
		int carry = a & b;
		a = a ^ b;//find sum without carry
		b = (carry) << 1; //find sum with carry and shift it
		
	}

	printf("Sum without using bitwise is %d\n", a);



}
