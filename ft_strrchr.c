/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:54:34 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/10 18:35:40 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strrchr(const char *s, int c)
// {
//     unsigned int  i;
//     char *rep;
//     rep = NULL;
//     i = 0;
//     if (c == 0)
//         return ("");
//     while(s[i])
//     {     
//         if (s[i] == (char ) c)
//             rep = ((char*)&s[i]);
//         i++;
//     }
//     return (rep);
// }

char *ft_strrchr(const char *s, int c)
{
    int  i;
    i = ft_strlen(s);
    char *rep;

    rep = NULL;
    while(i >= 0)
    {     
        if (s[i] == (char ) c)
        {
            rep = ((char*) s + i);
            break;
        }
        i--;
    }
    return (rep);
}
// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     const char *str = "marihh kup;kng";
//     //char *ptr = strrchr(str, 'o');
//     char *p2 = ft_strrchr(str, 'k');
//     //printf("%s", ptr);
//     printf("%s", p2);
//     return 0;
// }