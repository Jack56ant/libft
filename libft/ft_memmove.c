#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sr;
	char	*ds;

	i = len;
	ds = (char *)dst;
	sr = (char *)src;
	if (dst == src)
		return (dst);
	else if (ds > sr)
	{
		while (i > 0)
		{
			i--;
			ds[i] = sr[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (ds);
}