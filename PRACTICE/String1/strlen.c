#include <stdio.h>

int my_strlen(char* str)
{
	int count = 0;
	while(*str++) {
		count++;
	}

	return count;
}

int main()
{
	char str[] = "Hello";

	printf("String length is %d\n", my_strlen(str));
	return 0;
}
