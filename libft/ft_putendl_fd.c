#include <stdio.h>
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1);
}

int main()
{
     int fd;
    char *str = "yakup";
    fd = open("putendl_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
    ft_putendl_fd(str,fd);

    close(fd);
    return 0;
}