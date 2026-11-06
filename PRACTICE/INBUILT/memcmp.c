#include <stdio.h>

int my_memcmp(const void* ptr1, const void* ptr2, size_t n) {
	unsigned char* p1 = (unsigned char*)ptr1;
	unsigned char* p2 = (unsigned char*)ptr2;

	while(n > 0) {
		if(*p1 != *p2) {
			return (*p1 > *p2)? 1 : -1; 
		}
		p1++;
		p2++;
		n--;
	}
	return 0;
}

int main()
{
	char str1[] = "ABCD";
	char str2[] = "ABCD";

	char str3[] = "ACDE";
	char str4[] = "AADE";

	printf("str cmp function: %d\n", my_memcmp(str1, str2, 4));
	printf("str cmp function: %d\n", my_memcmp(str1, str3, 4));
	printf("str cmp function: %d\n", my_memcmp(str1, str4, 4));
	return 0;
}
