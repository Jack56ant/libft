/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:40:14 by yant              #+#    #+#             */
/*   Updated: 2024/11/01 13:04:19 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_ds;
	size_t	len_sr;
	size_t	i;

	len_ds = ft_strlen(dst);
	len_sr = ft_strlen(src);
	i = 0;
	if (dstsize <= len_ds)
		return (dstsize + len_sr);
	while (i + len_ds < dstsize - 1 && src[i] != '\0')
	{
		dst[len_ds + i] = src[i];
		i++;
	}
	dst[len_ds + i] = '\0';
	return (len_ds + len_sr);
}
