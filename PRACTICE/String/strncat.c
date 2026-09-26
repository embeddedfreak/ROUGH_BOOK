#include <stdio.h>

char* my_strcat(char* str1, const char* str2, size_t n)
{
	char* tmp = str1;

	while(*str1 != '\0') {
		*str1++;
	}

	while(*str2 !='\0' && (n)) {
		*str1++ = *str2++;
		n--;
	}

	*str1 = '\0';

	return tmp;
}

int main()
{
	char str1[20] = "Hello";
	char str2[20] = "World";

	size_t n = 3;
	printf("%s\n", my_strcat(str1, str2, n));

	return 0;
}
