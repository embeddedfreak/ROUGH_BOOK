#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void* aligned_malloc(size_t size, int align)
{
	//check if align is power of 2
	if(align == 0 |  (align & (align-1) != 0)) {
		return NULL;
	}

	//Calculate total size
	size_t total_size = size + (align-1) + sizeof(void*);

	//allocate the memory
	void* raw_ptr = malloc(total_size);

	if(raw_ptr == NULL) {
		return NULL;
	}

	uintptr_t align_addr = (uintptr_t)raw_ptr + sizeof(void*);
	/* 0x1003 -> 0x1004
	 * 0x1003 % 4 = 3
	 * 4 - 3 = 1;
	 */
	// align_addr = align_addr + align -1 & ~(align -1);
	
	align_addr = (align_addr + align -1) & ~(align-1);

	//store the original raw_ptr in first 4 bytes
	((void**) align_addr)[-1] = raw_ptr;

	return (void*)align_addr;
}

void my_free(void* addr) 
{
	if(addr == NULL) 
		return;

	void* align_addr = ((void**) addr)[-1];

	free(align_addr);
}

int main()
{
	void* addr = aligned_malloc(100, 32);

	printf("Aligned malloc addr: %p\n", addr);

	my_free(addr);

	
	return 0;
}
