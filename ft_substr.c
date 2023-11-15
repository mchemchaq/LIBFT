/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:02:34 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/14 17:42:11 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *str;
    size_t i;
    
    if (s == NULL) 
    {
            return (NULL);
    }  

    if (start > ft_strlen(s))
    {
        return (ft_strdup(""));
    }
    if (len > ft_strlen(s + start))
    {
        len = ft_strlen(s + start);
    }  
    i = 0 ;
    str = malloc(len + 1);
    if (str == NULL)
        return (NULL);
    while (i < len)
    {
        str[i] = s[i + start];
        i++;
    }
    str[i] = '\0';
    return (str);
}
// #include <stdio.h>
// int main()
// {
//     char *s1 = "hello word!";
//     char *s2 =ft_substr(s1,4,6);
//     if (s2 != NULL) {
//         printf("%s\n", s2);
//         free(s2); // Remember to free the allocated memory
//     }

//     return 0;
    
// }







