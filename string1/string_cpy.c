#include<stdio.h>
#include<string.h>

int my_strcmp(char* str1, char* str2)
{
	while((*str1 == *str2) && (*str1 != '\0')) {
		str1++;
		str2++;
	}

	return (unsigned char) *str1 - (unsigned char) *str2;

}

int main()
{
	char str1[20], str2[20];
	printf("Enter the string\n");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';

	printf("Enter the string\n");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';

	my_strcmp(str1, str2);	

	if(!my_strcmp(str1, str2)) {
		printf("Both Strings are equal\n");
	} else {
		printf("Both Strings are not equal\n");

	}
}
