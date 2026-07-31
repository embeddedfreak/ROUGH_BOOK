#include<stdio.h>
#include<string.h>

void my_strcpy(char* dst, char* src)
{
	while((*dst++ = *src++) != '\0');

}

int main()
{
	char str[20], dest_str[20];
	printf("Enter the string\n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	printf("String entered is %s\n", str);

	my_strcpy(dest_str, str);	
	printf("String copied is %s\n",dest_str);

}
