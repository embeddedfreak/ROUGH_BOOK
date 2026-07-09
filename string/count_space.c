#include<stdio.h>



int count_word(char* str)
{
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		if((str[i]!=' ') && (i == 0 || str[i-1] == ' ')) {
			count++;
		}
	}
	return count;
}

int main()
{
	char str[20] = "I love myself";
	
	printf("Number of words in string are: %d\n", count_word(str));
	return 0;
}
