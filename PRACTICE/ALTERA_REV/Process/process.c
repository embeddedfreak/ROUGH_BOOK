#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("Inside Main function\n");

	int ret = fork();

	if(ret == 0) {
		printf("Created Child process\n");
		
	} else {
		printf("I am parent process\n");
	}
	return 0;
}
