/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:54:34 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/10 18:17:17 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    unsigned int  i;
    char *rep;
    rep = NULL;
    i = 0;
    if (c == 0)
        return ("");
    while(s[i])
    {     
        if (s[i] == (char ) c)
            rep = ((char*)&s[i]);
        i++;
    }
    return (rep);
}
// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     const char *str = "";
//     //char *ptr = strrchr(str, 'o');
//     char *p2 = ft_strrchr(str, '\0');
//     //printf("%s", ptr);
//     printf("%s", p2);
//     return 0;
// }