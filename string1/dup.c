#include<stdio.h>
#include <string.h>

void remove_duplicate(char str[])
{
	for(int i = 1; i < strlen(str);i++) {
		for(int j = 0; j < i; j++) {
			if(str[i] == str[j]) {
				for(int r = i; r < strlen(str); r++) {
					str[r] = str[r+1];
				}
				i--;
			}
		
		}

	}

	printf("String after removing duplicates is %s\n", str);
}

int main()
{
	char str[] = "abaacd";

	remove_duplicate(str);

	return 0;
}
