/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:30:26 by yant              #+#    #+#             */
/*   Updated: 2024/11/01 13:03:47 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(s);
	cpy = (char *)malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		cpy[i] = s[i];
		i++;
	}
	return (cpy);
}
