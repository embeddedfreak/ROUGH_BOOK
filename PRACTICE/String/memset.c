#include <stdio.h>

void* my_memset(void* ptr, int val, size_t n) 
{
	//for val = 1 byte write is not possible
	//unsigned char* p = (unsigned char*) ptr;
	int* p = (int*) ptr;

	while(n > 0) {
		//*p++ = (unsigned char) val;
		*p++ = val;
		n--;
	}
	return ptr;
}

int main()
{

	int buffer[10];

	//my_memset(buffer, 1, sizeof(buffer));
	my_memset(buffer, 1, sizeof(buffer)/sizeof(buffer[0]));

	for(int i = 0; i < 10; i++) {
		printf("%d ", buffer[i]); 
	}

	return 0;
}
