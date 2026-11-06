#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void* my_alligned_malloc(size_t size, int align) 
{
	///check align is power of 2
	if(align == 0 || align & (align - 1) != 0) {
		return NULL;
	}

	//find total size(in bytes) to allocate
	size_t total_size = sizeof(void*) + (align-1) + size;

	//allocate using malloc
	void* raw_ptr = malloc(total_size);

	if (raw_ptr == NULL)
		return NULL;

	//get the actual address where you have data
	uintptr_t align_addr = (uintptr_t)raw_ptr + sizeof(void*);

	//Find align_address using formula addr = (addr + al - 1) & ~(al-1);
	align_addr = (align_addr + align - 1) & ~(align-1);

	//Now store the raw pointer at first 4 byte.
	((void**) align_addr)[-1] = raw_ptr;

	//return aligned address
	return (void*) align_addr;

}

void my_free(void* ptr) 
{
	if(ptr == NULL) {
		return;
	}

	//from aligned adress go back and get raw
	void* raw_ptr = ((void**)ptr)[-1];

	free(raw_ptr);

}

int main()
{
	void* addr = my_alligned_malloc(100, 32);

	printf("Malloc returns: %p\n", addr);

	my_free(addr);
}
