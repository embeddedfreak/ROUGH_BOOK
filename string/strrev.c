#include <stdio.h>
#include <string.h>

void my_strrev(char *src)
{
	int i = 0;
	int j = strlen(src)-1;

	while(i < j) {
		char temp = src[i];
		src[i] = src[j];
		src[j] = temp;
		i++;
		j--;
	}
}

int main()
{
	char src[20] = "Hello World";

	my_strrev(src);

	printf("After reverse string is: %s\n", src);		
	return 0;
}
