/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:36:19 by yant              #+#    #+#             */
/*   Updated: 2024/11/01 13:03:02 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_count(char const *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == sep || !str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static char	*str_parse(const char *str, char sep)
{
	char	*s;
	int		len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	ft_memcpy(s, str, len);
	s[len] = '\0';
	return (s);
}

static void	*free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	**start;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (str_count(s, c) + 1));
	if (!arr)
		return (NULL);
	start = arr;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			*arr = str_parse(s, c);
			if (!*arr)
				return (free_all(start));
			arr++;
		}
		while (*s && *s != c)
			s++;
	}
	*arr = NULL;
	return (start);
}
