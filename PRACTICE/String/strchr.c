#include <stdio.h>
/*
char *my_strchr(char* str, char tar) {
	while(*str != tar && *str != '\0') {
		str++;
	}

	if(*str == '\0') 
		return NULL;
	return str;
}
*/

char *my_strchr(const char* str, int ch)
{
	while(*str != '\0') {
		if(*str == (char) ch) {
			return (char*) str;
		}
		str++;
	}

	return NULL;

}

int main()
{
	char str[20] = "Hello World";

	char target = 'z';

	char* result = my_strchr(str, target);

	if(result) {
		printf("Target char is at %ld\n", result - str);
	} else {
		printf("CHaracter not found\n");
	}
	return 0;
}
