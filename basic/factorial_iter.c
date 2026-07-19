#include <stdio.h>

int fact(int num)
{
	int fact_num = 1;

	if(num == 0) 
		return 1;

	for(int i = 1; i <= num; i++) {
		fact_num*= i;	
	}

	return fact_num;
}

int main()
{
	int num = 5;
	printf("Factorial of %d, is: %d\n", num, fact(num));
	return 0;
}
