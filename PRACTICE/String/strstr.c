#include <stdio.h>

char* my_strstr(const char* haystack, const char* needle)
{
	if(*needle =='\0') {
		return haystack;
	}

	for(const char* h = haystack; *h != '\0'; h++) {
		const char *h_advance = h;
		const char* n = needle;
		while(*n != '\0' && *h_advance == *n) {
			n++;
			h_advance++;
		}	

		if(*n == '\0') {
			return h;
		}

	}
	return NULL;
}

int main()
{
	char str[20] = "Hello World";
	char search[10] = "Word";

	char* result = my_strstr(str, search);

	if(result)
		printf("%s\n", result);     

	return 0;
}

