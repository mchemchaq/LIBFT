/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:16:38 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/13 21:24:24 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char *str;
    size_t i;

    i = 0;
    str = (char *)malloc (ft_strlen(s1) + 1);
    if (!str) {
        return NULL;
    }
    while (s1[i])
    {
        str[i] =s1[i];
        i++;
    }
    str[i] = 0;
    return (str);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *tmp = "\nstr_dup's adress == str's adress";
//     int r_size = strlen(tmp);
//     int size;
 
//     printf("%s\n", ft_strdup(tmp));
//     printf("%s\n", strdup(tmp));
//     // char *s1="";
//     // printf("%s\n", ft_strdup(s1));
//     // printf("%s\n", strdup(s1));
// }
