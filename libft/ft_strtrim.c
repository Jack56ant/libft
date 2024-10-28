/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:01:02 by yant              #+#    #+#             */
/*   Updated: 2024/10/28 18:27:32 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char *cpy;
    size_t i;
    size_t len;
    size_t j;

    i=0;
    j=0;
    len = ft_strlen(s1);

    while (s1[i] == *set)
    {
        len--;
        i++;
    }

    cpy = (char *)malloc(len+1);

    i=0;

    while (s1[i] != *set)
    {
    
    }
    
    

}