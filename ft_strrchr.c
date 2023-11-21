/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:54:34 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/19 15:48:45 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*rep;

	i = ft_strlen(s);
	rep = NULL;
	while (i >= 0) 
	{
		if (s[i] == (char)c) 
		{
			rep = ((char *)s + i);
			break ;
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