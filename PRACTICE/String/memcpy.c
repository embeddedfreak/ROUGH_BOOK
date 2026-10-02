#include <stdio.h>
#include <string.h>

void* my_memcpy(void* dest, void* src, size_t n) 
{
	char* s_ptr = (char*) src;
	char* d_ptr = (char*) dest;

	while(n > 0) {
		*d_ptr++ = *s_ptr++;
		n--;
	}
	return dest;

}

int main()
{
	char str[] = "Hello";
	char dest[10];
	char* d_ptr = my_memcpy(dest, str, strlen(str)+1);

	printf("After memcpy: %s\n", d_ptr);
	return 0;
}
