/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:44:37 by yant              #+#    #+#             */
/*   Updated: 2024/10/28 17:19:01 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{

    size_t i;
    size_t j;
    char *cpy;

    cpy = (char *)malloc(ft_strlen(s1) + ft_strlen(s2)+1);

    i= 0;
    j=0;

    if (!cpy)
        return NULL;

    while (s1[i])
    {
        cpy[i] = s1[i];
        i++;
    }

    while (s2[j] )
    {
        cpy[i + j] = s2[j];
        j++;
    }
    cpy[i + j] = '\0';
    
    return cpy;

}