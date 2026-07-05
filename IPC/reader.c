#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buffer[100];

	fd = open("myfifo", O_RDONLY);

	read(fd, buffer, sizeof(buffer));

	printf("Recieved: %s\n", buffer);

	close(fd);

	return 0;
}
