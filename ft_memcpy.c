/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:58:38 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/19 15:58:33 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdst;
	size_t			i;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	if (!tmpdst && !tmpsrc)
		return (dst);
	if (dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (dst);
}
// int main()
// {
//    char src[] = "maryem";
//    char dst[7];
//    printf("%s", (char *)ft_memcpy(src + 1, src, 1));
// }