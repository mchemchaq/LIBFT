/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:26:44 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/04 19:16:58 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;
	size_t	s;

	i = 0;
	s = 0;
	while (str[i])
	{
		s = s + 1;
		i++;
	}
	return (s);
}
// int main()
// {
// 	printf("%zu", ft_strlen("maryem"));
// }
