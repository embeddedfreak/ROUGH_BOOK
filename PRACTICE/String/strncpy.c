#include<stdio.h>

char* my_strncpy(char* dest, const char* src, size_t n)
{
	char *orig = dest;

	while(n && *src) {
		*dest++ = *src++;
		n--;
	}

	while(n--) {
		*dest++ = '\0';
	}

	return orig;
}

int main()
{
	char str[] = "Hello";
	char dest[10];

	size_t n = 7;

	my_strncpy(dest, str, n);

	printf("String after copy : %s\n", dest);

	for(int i = 0; i < n; i++) {
		printf("%d ", dest[i]);  
	}

	return 0;
}
