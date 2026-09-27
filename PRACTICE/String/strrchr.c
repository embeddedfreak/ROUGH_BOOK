#include <stdio.h>

char *my_strchr(const char* str, int ch)
{
	char* tar_ptr = NULL;

	while(*str != '\0') {
		if(*str == (char) ch) {
			tar_ptr = (char*) str;
		}
		str++;
	}

	return tar_ptr;
}

int main()
{
	char str[20] = "Hello World";

	char target = 'o';

	char* result = my_strchr(str, target);

	if(result) {
		printf("Target char is at %ld\n", result - str);
	} else {
		printf("CHaracter not found\n");
	}
	return 0;
}
