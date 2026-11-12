#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	char msg[20] = "Hi Child";

	int fd = open("my_fifo", O_WRONLY);
	write(fd, msg, sizeof(msg));
	printf("Writing message to child: %s\n", msg);
}
