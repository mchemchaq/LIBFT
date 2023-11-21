/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:18:13 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/19 15:58:51 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12 
			|| str[i] == 13 || str[i] == 32))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-') 
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') 
	{
		result = (result * 10 + (str[i] - '0'));
		i++;
	}
	result *= sign;
	return (result);
}
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_atoi(" -95693"));
//     printf("%d", atoi(" -95693"));

// }
