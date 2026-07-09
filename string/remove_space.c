#include <stdio.h>

void remove_space(char *str)
{
	int i = 0;
	int j = 0;

	while(str[i] != '\0') {
		if(str[i] != ' ') {
			str[j++] = str[i];	
		}
		i++;
	}
}

int main()
{
	char str[20] = "Hell no no";

	remove_space(str);

	printf("After removing space string looks like: %s\n", str);

	return 0;

}
