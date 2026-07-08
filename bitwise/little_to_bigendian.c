#include <stdio.h>

void show_memory(int *x)
{
	char *ptr = (char*)x;
	printf("%p -> [0x%02x]\n", ptr, *ptr);
        ptr++;
        printf("%p -> [0x%02x]\n", ptr, *ptr);
        ptr++;
        printf("%p -> [0x%02x]\n", ptr, *ptr);
        ptr++;
        printf("%p -> [0x%02x]\n", ptr, *ptr);
        ptr++;

}

void little_to_big_endian(int *x)
{
	*x = ((*x & 0xFF000000) >> 24 |
		(*x & 0x00FF0000) >> 8 |
		(*x & 0x0000FF00) << 8 |
		(*x & 0x000000FF) << 24);
}

int main()
{
	unsigned int x = 0x12345678;

	show_memory(&x);

	printf("convert it to big endian\n");	

	little_to_big_endian(&x);
	show_memory(&x);
	return 0;
}
