#include <stdio.h>

char* my_strcat(char* str1, char* str2)
{
	char* src = str1;

	while(*str1) {
		str1++;
	}
	
	while(*str2 != '\0') {
		*str1++ = *str2++;
	}

	*str1 = '\0';

	return src;

}

int main()
{
	char str1[20] = "Hello";
	char str2[20] = "World";

	
	printf("%s\n", my_strcat(str1, str2));

	return 0;
}
