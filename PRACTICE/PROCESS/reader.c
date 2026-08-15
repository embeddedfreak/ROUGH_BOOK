#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{       
        int fd;
	char buffer[10];

        fd = open("myfifo", O_RDONLY);

        read(fd, buffer, sizeof(buffer));

	printf("Message from writer in fifo: %s\n", buffer);

        close(fd);
}
