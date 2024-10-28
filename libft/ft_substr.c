/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yant <yant@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:22:41 by yant              #+#    #+#             */
/*   Updated: 2024/10/28 17:33:56 by yant             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *new_memo;
   size_t i;
   size_t s_len;

   s_len = ft_strlen(s);
   i=0;

   if(!s)
   return NULL;
   
   if (start >= s_len)
   {
    new_memo = (char *)malloc(1);
        if (new_memo)
            new_memo[0] = '\0';
        return new_memo;
   }
   
   if (len > (s_len - start))
        len = s_len - start;

    new_memo = (char *)malloc(len +1);

  
    if(new_memo == NULL)
    return NULL;

    while (i<len)
    {
    new_memo[i] = s[start +i];
    i++;
    }
    new_memo[i]='\0';
    return new_memo;

}
