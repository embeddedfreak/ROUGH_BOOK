#include <stdio.h>

void* my_memset(void* ptr, int val, size_t n)
{
	unsigned char* p = (unsigned char*) ptr;

	while(n>0) {
		*p = (unsigned char)val;
		p++;
		n--;
	}
	return ptr;
}

int main()
{
	char buffer[10];
	
	my_memset(buffer, 'A', 5);

	buffer[5] = '\0';

	printf("Buffer: %s\n", buffer);
	
	return 0;
}
