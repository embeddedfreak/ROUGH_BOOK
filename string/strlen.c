#include <stdio.h>

int my_strlen(const char *s)
{
	int len = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		len++;

	}
	return len;
}

int main()
{
	char str[10] = "Hello";

	printf("Length of the string is: %d\n", my_strlen(str));
	return 0;
}
