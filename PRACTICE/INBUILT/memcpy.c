#include <stdio.h>
#include <string.h>
void my_memcpy(void* dest, void* src, size_t size)
{
	char* d = (char*) dest;
	char* s = (char*) src;

	while(--size) {
		*d++ = *s++;
	}
}

int main()
{
	int buffer[100];
	int dest[100] = {0};
	for(int i = 0; i < 100; i++) {
		buffer[i] = i;
	}

//	memcpy(dest, buffer, sizeof(int) * 100);
	my_memcpy(dest, buffer, sizeof(int) * 100);
	for(int i = 0; i < 100; i++) {
		printf("%d ", dest[i]);
	}

	printf("\n");

	return 0;
}
