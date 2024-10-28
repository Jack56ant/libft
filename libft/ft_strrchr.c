#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    size_t len;

    len = ft_strlen(str);
    
    while (len >= 0)
    {
        if (str[len] == c)
        {
           return ((char *)str+len );
        }
        len--;
    }
    
    return NULL;
    
}
