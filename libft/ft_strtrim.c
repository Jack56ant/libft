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

static int set_values(char c, const char *set) {
    while (*set) {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set) {
    
    if (!s1 || !set)
        return NULL;
    
    size_t star;
    char *ptr;
    size_t end;
    size_t i;

    end = ft_strlen(s1);
    star = 0;
    i=0;

    while (set_values((char)s1[star],set) && star < end )
        star++;
    
    while (set_values((char)s1[--end],set )&& star < end)

    ptr = (char *)malloc(end - star +1);

    if (!ptr)
        return NULL;
    
    while (star <= end)
         ptr[i++]= s1[star++];

        ptr[i] = '\0';

    return(ptr);
}

int main() {
    char s1[] = "***s---Dünya----s****";
    char set[] = "-*";

    char *trimmed_str = ft_strtrim(s1, set);
    if (trimmed_str) {
        printf("O: '%s'\n", s1);
        printf("K: '%s'\n", trimmed_str);
        free(trimmed_str); 
    }
    return 0;
}
