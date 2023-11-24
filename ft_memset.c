/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:39:39 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/24 20:36:47 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len > 0)
	{
		*(str++) = (unsigned char) c;
		len--;
	}
	return (b);
}
// int main() {
//     int a = 7;

// 	ft_memset(&a, 7, 2);//111 111
// 	ft_memset(&a, 208, 1);// 111 011001

// 	printf("old: %d\n", a);
// }