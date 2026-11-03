#include <stdio.h>

void* memset(void* ptr, int val, size_t n)
{
	unsigned char* p = (unsigned char*) ptr;

	while(n--) {
		*p++ = val;
	}
	return ptr;
}
int main()
{
	unsigned char buffer[10];

	memset(buffer, 1, sizeof(buffer));

	for(int i = 0; i < sizeof(buffer); i++) {
		printf("%d ", buffer[i]);
	}
}

