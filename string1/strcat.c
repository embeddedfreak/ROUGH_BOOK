#include <stdio.h>
/*
char* mystrcat(char* dest, const char* src)
{
	char* ptr = dest;
	while(*ptr != '\0') {
		ptr++;
	}
	
	while(*src != '\0') {
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return dest;
}
*/
char* mystrcat(char* dest, const char* src)
{
	char* ptr = dest;

	while(*ptr) {
		ptr++;
	}
/*
 * Important: Both post-increments happen after their respective 
 * old pointer values are used. The assignment happens before the 
 * comparison with '\0'
 */
	while((*ptr++ = *src++) != '\0');

	return dest;
}

int main()
{
	char str1[20] = "Hello";
	char str2[10] = "World";


	char* dest = mystrcat(str1, str2);

	printf("After concat string is %s\n", dest);
	return 0;
}
