#include <stdio.h>
#include <stdbool.h>
#if 0
bool check_endianess()
{
	int num = 1;
	unsigned char* ptr = (unsigned char*) &num;

	if(*ptr == 1) {
		return true;
	} 
	
	return false;
}
#endif

void show_memory(int* num) {
	char* ptr =  (char*) num;
	
	printf("[%p] -> 0x%02x\n", ptr, *ptr);
	ptr++;
	printf("[%p] -> 0x%02x\n", ptr, *ptr);
	ptr++;
	printf("[%p] -> 0x%02x\n", ptr, *ptr);
	ptr++;
	printf("[%p] -> 0x%02x\n", ptr, *ptr);
}

void change_endian(int* num)
{
	*num = (((*num & 0xFF000000) >> 24) | 
		((*num & 0x00FF0000) >> 8) |
		((*num & 0x0000FF00) << 8) |
		((*num & 0x000000FF) << 24));
}

int main()
{
	unsigned int num = 0x12345678;
	
	show_memory(&num);

	printf("After change from little to big endian\n");

	change_endian(&num);

	show_memory(&num);


	return 0;
}
