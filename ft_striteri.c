/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:40:43 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/19 16:42:15 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// void f(unsigned int i, char *c)
// {
//     printf("%c\n", *c);
// }
// int main(void)
// {
//     char str[] = "Hello, World!";
//     ft_striteri(str, &f);

//     return 0;
// }