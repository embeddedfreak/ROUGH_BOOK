#include <stdio.h>

int my_strcmp(const char* str1, const char* str2, size_t n)
{
	while((n > 0) && (*str1 != '\0') && (*str1 == *str2)) {
		str1++;
		str2++;
		n--;
	}

	if(n == 0) 
		return 0;

//	return (unsigned char) *str1 - (unsigned char) *str2;
	return (*str1 == *str2)? 0 : ((unsigned char)*str1 < (unsigned char)*str2)? -1: 1;
}

int main()
{
	char str1[] = "Hello"; 
	char str2[] = "Wor";

	printf("%d\n", my_strcmp(str1, str2, 3));	
	return 0;
}
