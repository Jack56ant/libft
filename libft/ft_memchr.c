
#include "libft.h"
void    *memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n )
    {
        if (ptr[i] == (unsigned char)c )
        {
            return ((void *)(ptr +i));
        }
        i++;
        
    }
    return NULL;
    
}
