#include <stdio.h>

void remove_dup(char *str)
{
	for(int i = 0; str[i] != '\0'; i++) {
		for(int j = i + 1; str[j] != '\0'; ) {
			if(str[i] == str[j]) {
				for(int k = j; str[k] != '\0'; k++) {
					str[k] = str[k+1];
				}
			} else {
				j++;
			}
		}
	}

}

int main()
{
	char str[20] = "abbbcc";

	remove_dup(str);

	printf("After removing duplicates string looks like: %s\n", str);

	return 0;

}
