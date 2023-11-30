/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:39:32 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/28 18:56:19 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*(str++) = 0;
		n--;
	}
}
// int main()
// {
//     char str[] = "Hello, World!";
//     size_t len = 5;
//     ft_bzero(str, len);

//     printf("%s\n", str);

//     return 0;
// }