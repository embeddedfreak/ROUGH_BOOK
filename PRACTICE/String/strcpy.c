#include <stdio.h>
/*
char* my_strcpy(char* d_str, const char* s_str)
{
	while(*s_str) {
		*d_str++ = *s_str++;
	}

	*d_str = '\0';
	return d_str;

}*/
char* my_strcpy(char* d_str, const char* s_str)
{
	char* orig_ptr = d_str;
	while(*d_str++ = *s_str++);
	return orig_ptr;
}

int main()
{
	char s_str[10] = "Hello";
	char d_str[10];

	my_strcpy(d_str, s_str);
	printf("String copied %s\n", d_str);
	return 0;
}



