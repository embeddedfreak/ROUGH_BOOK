#include <stdio.h>
#include <string.h>


int main()
{
	char str[] = "My name is Gladson";

	char* piece = strtok(str, " ");

	while(piece != NULL) {

		printf("%s\n", piece);
		piece = strtok(NULL, " ");		
	}
	return 0;
}

