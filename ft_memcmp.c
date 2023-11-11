/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:04:11 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/11 15:22:33 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;
    str1 = (unsigned char *)  s1;
    str2 = (unsigned char *) s2;
    i=0;
    while (i < n  )
    {
        if ((unsigned char )str1[i] != (unsigned char)str2[i])
            return ((unsigned char)str1[i] - (unsigned char)str2[i]);
        i++;
    }
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     printf("%d", ft_memcmp("abbcd", "mimi", 4));
//     printf("%d", memcmp("abbcd", "mimi", 4));
// }
