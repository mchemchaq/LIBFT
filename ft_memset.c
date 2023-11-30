/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:39:39 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/30 18:42:21 by mchemcha         ###   ########.fr       */
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
// #include <stdio.h>
// int main() {
// 	int ptr[]= {1,2,3,4,5};
// 	int i;
// 	int v;
// 	while (i < sizeof(ptr)/sizeof(int) )
// 	{
// 		printf("%d\n", ptr[i]);
// 		i++;
// 	}
// 	v = *(int*)ft_memchr(ptr, 4, 20);
// 	printf("---------\n" );
// 	i = 0;
// 	ft_memset((int*)ft_memchr(ptr, 4, 20),0, 1);//111 111
// 	while (i < sizeof(ptr)/sizeof(int) )
// 	{
// 		printf("%d\n", ptr[i]);
// 		i++;
// 	;}
// 	printf("%d", v );
// 	//ft_memset(&a, 208, 1);// 111 011001
// }