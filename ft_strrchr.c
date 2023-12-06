/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:54:34 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 21:36:12 by mchemcha         ###   ########.fr       */
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
