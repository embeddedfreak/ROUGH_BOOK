#include<stdio.h>
#include <string.h>
#include <stdbool.h>

void remove_duplicate(char str[])
{
	bool isdup[256] = {false};

	int j = 0;

	for(int i = 0; i < strlen(str); i++) {
		if(!isdup[str[i]]) {
			isdup[str[i]] = true;
			str[j] = str[i];
			j++;
		}
	}

	str[j] = '\0';

	printf("String after removing duplicates is %s\n", str);
}

int main()
{
	char str[] = "abaacd";

	remove_duplicate(str);

	return 0;
}
