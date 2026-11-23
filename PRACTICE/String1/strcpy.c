#include <stdio.h>

char* my_strcpy(char* dest, const char* src)
{
	char* d = dest;

	while((*dest++ = *src++) != '\0');

	return d;
}

int main()
{
	char str[] = "Hello";
	char buf[10];

	my_strcpy(buf, str);

	printf("String after copy is %s\n", buf);
	
	return 0;
}
