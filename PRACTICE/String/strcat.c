#include <stdio.h>

char* my_strcat(char* str1, const char* str2)
{
	char* tmp = str1;

	while(*str1 != '\0') {
		*str1++;
	}

	while(*str2 !='\0') {
		*str1++ = *str2++;
	}

	*str1 = '\0';

	return tmp;
}

int main()
{
	char str1[20] = "Hello";
	char str2[20] = "World";

	printf("%s\n", my_strcat(str1, str2));

	return 0;
}
