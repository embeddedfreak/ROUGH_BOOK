#include <stdio.h>

char* my_strncpy(char* dest, const char* src, int n)
{
	char* d = dest;
	while(n > 0 && *src!='\0') {
		*dest++ = *src++;
		n--;
	}

	*dest = '\0';
	return d;
}

int main()
{
	char str[] = "hello";

	int n = 4;

	char dest[10];

	printf("String copy is %s\n", my_strncpy(dest, str, n));

	return 0;
}
