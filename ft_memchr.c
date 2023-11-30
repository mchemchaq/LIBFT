/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:43:53 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/29 19:43:20 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*str;

	ch = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch) 
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char *r1 ;
// 	r1 = ft_memchr("marte jsatr", 'a', 5);
//     printf("%s\n", r1);
//     //void *r2 = memchr("marte jsatr", 'a', 5);
// }
