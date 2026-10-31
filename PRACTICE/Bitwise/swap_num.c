#include <stdio.h>

void swap(int *a, int *b)
{
	*a  = *a ^ *b; //3
	*b = *a ^ *b; //1
	*a = *a ^ *b; //2
}	

int main()
{
	int a = 1;
	int b = 2;

	swap(&a, &b);

	printf("After swap a = %d, b = %d\n", a, b);
}
