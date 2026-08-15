#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;


	int fd[2];
	char msg[] = "Hi Child";
	char buffer[100];

	pipe(fd);

	pid = fork();

	if(pid == 0) {
		printf("Its a child process\n");
		close(fd[1]);
		read(fd[0], buffer, sizeof(buffer));
		printf("Message from Parent: %s", buffer);
	} else {
		printf("Its a parent process\n");
		close(fd[0]);
		write(fd[1], msg, sizeof(msg));
		

	}
	return 0;
}

