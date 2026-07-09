#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool my_strcmp(char *dst, const char *src)
{
	if(strlen(src) == strlen(dst)) {
		for(int i = 0; (src[i] != '\0'); i++)
		{
			if(src[i] != dst[i]) {
				return false;
			}
		}
	} else {
		return false;
	}

	return true;
}

int main()
{
	char src[20] = "Hello World";
	char dst[20] = "Hello World";

	my_strcmp(dst, src);

	if(my_strcmp(dst, src))
		printf("String are equal\n");		
	else
		printf("String are not equal\n");		
	return 0;
}
