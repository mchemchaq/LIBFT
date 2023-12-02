/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:22:36 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/02 20:58:08 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (fd < 0)
		return ;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// int main(void)
// {
//     FILE *fd;
//     fd = fopen("file1", "w");
//     if (fd == NULL)
//     {
//         printf("Error opening file");
//         return 1;
//     }

//     char *myChar = "hi maryem\n";
// 	fprintf(fd, "hello word\n");
//     ft_putstr_fd(myChar, fileno(fd));

//     fclose(fd);

//     return 0;
// }