/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:44:00 by yant              #+#    #+#             */
/*   Updated: 2024/11/01 13:05:47 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
		len--;
	}
	if (str[len] == (char)c)
		return ((char *)str + len);
	return (NULL);
}
