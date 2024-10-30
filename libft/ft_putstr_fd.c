
#include <stdio.h>
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    
}

int main()
{
    int fd;
    char *str = "yakup";
    fd = open("str_fd.txt", O_WRONLY | O_CREAT, 0777);
    ft_putstr_fd(str,fd);

    close(fd);
    return 0;
}