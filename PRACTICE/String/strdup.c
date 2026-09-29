#include <stdio.h>
#include <stdlib.h>

char* my_strdup(const char* str)
{
	size_t len = 0;

	const char* strbkp = str;

	while(*str != '\0') {
		str++;
		len++;
	}

	char* dup = malloc(len+1);

	if(dup == NULL) {
		printf("Malloc failed to allocate memory\n");
		return NULL;
	}

	char* dupbkp = dup;

	while(*strbkp != '\0') {
		*dup++ = *strbkp++;
	}

	*dup = '\0';

	return dupbkp;
}

int main()
{
	char str[20] = "Hello, World";

	char* duplicate = my_strdup(str);

	if(duplicate) {
		printf("Duplicate string: %s\n", duplicate);
		free(duplicate);
	}

	return 0;
}

