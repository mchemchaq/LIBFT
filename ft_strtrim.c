/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:40:42 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/15 11:58:18 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int in_str(char const *set,char const c)
{
    int i;

    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i ;
    int j ;
    
    i = 0;
    j = ft_strlen(s1) - 1;
    if (!s1)
        return (NULL);
    while (s1[i] && in_str(set, s1[i]))
        i++;
    while (j > i && in_str(set, s1[j]))
        j--;

    return (ft_substr(s1, i, j - i + 1));
}
// #include <stdio.h>
// int main()
// {
//     char *s1= "maryam";
//     char *set="ma";
//     printf("%s", ft_strtrim(s1, set));
// }