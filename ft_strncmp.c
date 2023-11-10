/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:41:04 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/10 19:39:40 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i=0;
    while (i < n  && ((unsigned char)s1[i] != '\0' || (unsigned char)s2[i] != '\0'))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
    
//     printf("%d\n",ft_strncmp("test\200", "test\0", 6));
//     printf("%d",  strncmp("test\200", "test\0", 6));
// }
