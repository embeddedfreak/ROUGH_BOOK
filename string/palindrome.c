#include <stdio.h>
#include <string.h>

void is_pal(char *src)
{
	int i = 0;
	int j = strlen(src) - 1;

	while(i < j) {
		if(src[i] != src[j]) {
			printf("String is not a palindrome\n");
			return;
		}
		i++;
		j--;
				
	}
	printf("String is a palindrome\n");

}

int main()
{
	char src[20] = "madam";

	is_pal(src);

	return 0;
}
