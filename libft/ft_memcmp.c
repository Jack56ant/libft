#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *_s1;
    unsigned char *_s2;

    i=0;
    _s1 = (unsigned char *)s1;
    _s2 = (unsigned char *)s2;

    while (i < n)
    {
        if (_s1[i] != _s2[i])
        {
            return (_s1[i] - _s2[i]);
        }
        i++;
        
    }
    return 0;
}
