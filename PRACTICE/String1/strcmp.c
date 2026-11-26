#include <stdio.h>

int my_strcmp(const char *str1, const char *str2)
{
	while(*str1 != '\0' && *str1 == *str2) {
		str1++;
		str2++;
	}

	return (*str1 == *str2) ? 0 : *str1 < *str2? -1 : 1;

}

int main()
{
	char str1[20] = "Hello";
	char str2[20] = "Hella";

	int ret = my_strcmp(str1, str2);

	printf("Return value is %d\n", ret);
	return 0;
}
