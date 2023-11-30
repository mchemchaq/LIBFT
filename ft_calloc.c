/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:35 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/29 21:42:43 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	if (size != 0 && count >= SIZE_MAX / size)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	printf(" my calloc = %s\n",ft_calloc(45 ,-11));
// 	printf("calloc = %s",calloc(45 ,-11));
// }