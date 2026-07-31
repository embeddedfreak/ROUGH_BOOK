#include<stdio.h>
#include<string.h>

int string_len(char str[])
{
	int size = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		size++;
	}

	return size;
}

int main()
{
	char str[20];
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int size = string_len(str);
	printf("Entered string is %s and length: %d\n", str, size);

	return 0;
}
