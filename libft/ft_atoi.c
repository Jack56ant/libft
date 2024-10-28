/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:51:17 by yant              #+#    #+#             */
/*   Updated: 2024/10/28 14:43:54 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     t_atoi(const char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;

    while (*str == 32 || (*str >=9 && *str <= 13))
    str++;

    if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
	{
		sign *= +1;
	}
	
	if (*str == '-' || *str == '+')
	{
		 return 0;
	}
	while (ft_isdigit(*str) == 1)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}