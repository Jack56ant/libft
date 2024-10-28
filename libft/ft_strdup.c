#include "libft.h"
char *ft_strdup(const char *s)
{
    char *cpy;
    int len;
    int i;


    len = ft_strlen(s);
    i = 0;
    cpy = (char *)malloc(len+1);

    if (cpy == NULL)
    {
        return NULL;
    }

    while (i<=len)
    {
        cpy[i] = s[i];
        i++;
    }
     cpy[i] = '\0';
    return cpy;
}
