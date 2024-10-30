
#include <stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);

}

int main()
{
    int fd;
    char s = 'y';

    fd = open("putchar_fd.txt", O_WRONLY | O_CREAT, 777);
    
    ft_putchar_fd(s,fd);

   close(fd);

    return 0;
}


