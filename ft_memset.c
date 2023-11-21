/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:39:39 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/19 17:03:23 by mchemcha         ###   ########.fr       */
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
// *int main() {
//     int myString[] ={42};
//     ft_memset(myString,0,4);
//         ft_memset(myString, 57, 2);
//  ft_memset(myString, 5, 1);
//     printf("myString après memset : %d\n", myString[0]);

//     return 0;
// }