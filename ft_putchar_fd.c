/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:16:54 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/19 17:03:58 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(void)
// {
//     char myChar = 'A'; 
//     int fileDescriptor = 1; 
//     ft_putchar_fd(myChar, fileDescriptor);

//     return 0;
// }