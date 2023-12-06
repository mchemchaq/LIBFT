/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:25:02 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 19:26:49 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *ch, size_t len)
{
	size_t	i;
	size_t	chlen;

	if (*ch == 0)
		return ((char *)s1);
	i = 0;
	chlen = ft_strlen(ch);
	while (i < len && s1[i])
	{
		if (s1[i] == *ch && len - i >= chlen
			&& ft_strncmp(&s1[i], ch, chlen) == 0)
		{
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
