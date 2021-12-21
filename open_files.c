#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd;
    int fd2;

    fd = open("Cpp Notes", O_RDONLY);
    fd2 = open("Cpp Notes", O_RDONLY);

    printf("%d %d\n", fd, fd2);
    close(fd);
    close(fd2);
    return (0);
}