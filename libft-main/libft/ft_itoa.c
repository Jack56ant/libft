/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:56:16 by yant              #+#    #+#             */
/*   Updated: 2024/10/31 13:56:16 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	long	num;

	len = n_len(n);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = n;
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	if (num == 0)
		ptr[0] = '0';
	while (num > 0)
	{
		ptr[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
