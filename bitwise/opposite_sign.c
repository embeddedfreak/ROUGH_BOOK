#include <stdio.h>
#include <stdbool.h>
/*
bool check_opp_sign(int num1, int num2)
{
	int mask = 0x80000000;

	if((num1 & mask) ^ (num2 & mask)) {
		return true;
	} else {
		return false;
	}
}
*/

/* If sign is negative then xor will give always negative */
bool check_opp_sign(int num1, int num2)
{
	return ((num1 ^ num2) <0);
}

int main()
{
	int num1 = 10, num2 = -12;

	if(check_opp_sign(num1, num2)) {
		printf("Number have opposite sign\n");
	} else {
		printf("Number dont have opposite sign\n");
	}
	return 0;
}
