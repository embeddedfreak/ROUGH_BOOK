#include <stdio.h>
#include <string.h>

void* my_memmove(void* d, const void* s, size_t n)
{
	const char* src = s;
	char* dest = d;

	if(src == dest) {
		return d;
	} else if(src < dest) {
		
		for(size_t i = n -1; i >= 0; i--) {
			dest[i] = src[i];
		}
	} else {
		for(size_t i = 0; i < n; i++) {
			dest[i] = src[i];
		}
	}

	return d;
}

int main()
{
	char str[] = "ABCDEF";

	char* dest = my_memmove(str, str + 2, 4);

	printf("After memmov string is %s\n", str);
	return 0;
}

