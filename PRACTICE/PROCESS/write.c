#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd;
	fd = open("myfifo", O_WRONLY);

	write(fd, "Hi child", 9);

	close(fd);
}
