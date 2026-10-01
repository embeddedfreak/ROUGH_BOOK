#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_delimiter(char ch, char* del) 
{
	while(*del != '\0') {
		if(ch == *del)
			return true;
		del++;
	}

	return false;
}

char* my_strtok(char* str, char* del)
{
	static char* next;
	
	if(str != NULL)	
		next = str;

	if(next == NULL)
		return NULL;

	char* token = next;

	while((*next != '\0') && !is_delimiter(*next, del)) {
		next++;
	}

	
	if(*next != '\0') {
		*next = '\0';
		next++;
	} else {
		next = NULL;
	}

	return token;
}

int main()
{
    printf("Program started\n");

    char str[] = "My,name,is,Gladson";

    char *piece = my_strtok(str, ",;");

    while (piece != NULL) {
        printf("TOKEN = [%s]\n", piece);
        piece = my_strtok(NULL, ",;");
    }

    printf("Program finished\n");

    return 0;
}
