/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:01:02 by yant              #+#    #+#             */
/*   Updated: 2024/11/04 13:27:19 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while ((start < end) && ft_strchr(set, s1[end -1]))
		end--;
	ptr = (char *)malloc(end - start + 1);
	if (!ptr)
		return (NULL);
	while (start < end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
