#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void* aligned_malloc(int size, int align)
{
	//check if align is power of 2
	if(align != 0 && (align & (align -1)) != 0) {
		return NULL;
	}

	int total_size = size + sizeof(void*) + (align-1);
	
	void* raw_ptr = malloc(total_size);

	if(raw_ptr == NULL) {
		return NULL;
	}
	/* 0x1003
	 * 4
	 * add % align = 3
	 * align - 3 = 1 step forward to get align addr
	 */
	uintptr_t align_addr = (uintptr_t)raw_ptr + sizeof(void*);
	
	/* 0x1003
	 * 1003 + 3 = (1006 & ~3)
	 * 1 00 0110
	 * 1 11 1100
	 * 1 00 0100
	 * 1004
	 */
	align_addr = (align_addr + (align -1)) & ~(align -1);

	((void**) align_addr)[-1] = raw_ptr;

	return (void*)align_addr;
}

void my_free(void* ptr) 
{
	if(ptr == NULL) {
		return;
	}

	void* orig_addr = ((void**)ptr)[-1];

	free(orig_addr);
}
int main()
{
	int size = 100;
	int align = 32;
	void* ptr = aligned_malloc(size, align);

	printf("Aligned address returned by malloc is %p\n", ptr);

	my_free(ptr);
	return 0;
}
