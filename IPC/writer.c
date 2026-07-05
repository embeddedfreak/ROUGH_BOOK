#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd;
	fd = open("myfifo", O_WRONLY);

	write(fd, "Hello reader", 13);

	close(fd);

	return 0;
}
