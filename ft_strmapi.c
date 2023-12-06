/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:38:02 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 21:36:02 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cara;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	cara = malloc(ft_strlen(s) + 1);
	if (!cara)
		return (NULL);
	while (s[i])
	{
		cara[i] = f(i, s[i]);
		i++;
	}
	cara[i] = '\0';
	return (cara);
}
