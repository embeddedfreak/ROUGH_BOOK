#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	pid_t pid;

	int fd[2];
	char msg[] = "Hello child";
	char buffer[100];

	
	pipe(fd);
	
	pid = fork();

	if(pid == 0) {
		printf("I am child process\n");
		close(fd[1]);
		read(fd[0], buffer, sizeof(buffer));
		printf("Message from parent: %s\n", buffer);
		
	} else {
		close(fd[0]);
		write(fd[1], msg, strlen(msg)+1);
		printf("I am parent process\n");
	}


	
	return 0;
}
