#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	char buffer[20];

	int fd = open("my_fifo", O_RDONLY);
	read(fd, buffer, sizeof(buffer));
	printf("Read from parent: %s\n", buffer);
}
