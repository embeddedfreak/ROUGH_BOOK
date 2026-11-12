#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("Inside Main function\n");

	char buffer[20];
	char msg[20] = "Hi Child";

	int fd[2];

	pipe(fd);

	int ret = fork();

	if(ret == 0) {
		close(fd[1]);
		read(fd[0], buffer, sizeof(buffer));
		close(fd[0]);
		printf("Child reading...: %s\n", buffer);
		
	} else {
		printf("parent writing\n");
		close(fd[0]);
		write(fd[1], msg, sizeof(msg));
		close(fd[1]);
	}
	return 0;
}
