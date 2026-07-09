#include <stdio.h>

void my_strcpy(char *dst, const char *src)
{
	for(int i = 0; ; i++)
	{
		dst[i] = src[i];
		if(src[i] == '\0')
			break;
	}

}

int main()
{
	char src[20] = "Hello World";
	char dst[20];

	my_strcpy(dst, src);

	printf("Destination string after copy is: %s\n", dst);		
	return 0;
}
