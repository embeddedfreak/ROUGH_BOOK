#include <stdio.h>

/*
 * A B C D E F
 * arr+2, arr, 4
 * A B [A B A B C]
 * A B A B C D 
 *
 * src < dest
 * copy from last
 * src > dest copy from first
 * both equal return
 */

void* my_memmove(void* dest, const void* src, size_t n) {
	unsigned char* s = (unsigned char*) src;
	unsigned char* d = (unsigned char*) dest;

	if(s < d) {
		while(n > 0) {
			n--;
			*(d+n) = (unsigned char) *(s+n);
		}
	} else {
		while(n > 0) {
                        *d++ = (unsigned char)*s++;
                        n--;
                }
	}
	return dest;
}


int main()
{
	char str[10] = "ABCDEF";
	
	my_memmove(str+2, str, 4);
	printf("After memmove(): %s\n", str);

	return 0;
}
