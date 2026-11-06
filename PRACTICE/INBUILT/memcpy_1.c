#include <stdio.h>


void* my_memcpy(void* dest, const void* src, size_t n) {
	unsigned char* s = (unsigned char*) src;
	unsigned char* d = (unsigned char*) dest;

	while(n > 0) {
		*d++ = *s++;
		n--;
	}

	return dest;
}

int main()
{
	char arr[10] = "Gladson";
	char dest[10];

	my_memcpy(dest, arr, 8);

	printf("After memcpy dest : %s\n", dest);
	return 0;
}

