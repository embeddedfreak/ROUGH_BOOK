#include <stdio.h>

int my_strncmp(const char *str1, const char* str2, int n)
{
	while((n > 0) && (*str1 != '\0') && (*str1 == *str2)) {
		str1++;
		str2++;
		n--;
	}

	if(n == 0) {
		return 0;
	}

	return (*str1 == *str2)? 0: (*str1 < *str2)? -1: 1;
}

int main()
{
	char str1[10] = "hello";
	char str2[10] = "hella";

	int n = 6;

	int ret = my_strncmp(str1, str2, n);

	printf("%d\n", ret);

	return 0;
}
