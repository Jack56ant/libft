
#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t ndl_len;
    size_t i;
    size_t j;

    ndl_len = ft_strlen(needle);
    i = 0;
    j = 0;

     if (ndl_len == 0)
     {
        return (char *)haystack;
    }

    while (i < len)
    {
        if (haystack[i] == needle[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (needle[j]  == '\0')
        {
            return ((char *)haystack+i-j+1);
        }
        
        i++;
    }
    
    return NULL; 

}
