#include <stdio.h>

char* my_strncat(char *str1, char *str2, int n)
{
	char* src = str1;

	while(*str1 != '\0') {
		str1++;
	}

	while((*str2 != '\0') && (n)) {
		*str1++ = *str2++;
		n--;
	}

	return src;
}

int main()
{
	char str1[20] = "Hello";
	char str2[20] = "World";

	int n = 5;
	
	printf("%s\n", my_strncat(str1, str2, n));

	return 0;
}
