#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* my_realloc(void* ptr, size_t size)
{
	if(ptr == NULL) {
		return malloc(size);
	}

	if(size == 0) {
		free(ptr);
		return NULL;
	}

	void* newptr = malloc(size);

	if(newptr == NULL) {
		return NULL;
	}

	memcpy(newptr, ptr, 20);

	return newptr;
}

int main()
{
	int *ptr = (int*) malloc(5 * sizeof(int));

	for(int i = 0; i < 5; i++) {
		ptr[i] = i+1; 
	}

	int* buffer = my_realloc(ptr, 10 * sizeof(int));


	return 0;
}
