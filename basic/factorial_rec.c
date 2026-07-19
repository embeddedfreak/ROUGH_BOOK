#include <stdio.h>

int fact(int num)
{

	//Base condition
	if(num == 0) 
		return 1;

	//recursion
	return num * fact(num -1);
}

int main()
{
	int num = 5;
	printf("Factorial of %d, is: %d\n", num, fact(num));
	return 0;
}
