#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == c)
        {
            return (char *)str;
        }
        str++;
    }

    if(*str == '\0')
    {
        return (char *)str;
    }

    return NULL;
}