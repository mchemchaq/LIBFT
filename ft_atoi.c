/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:18:13 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/30 20:28:31 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') 
	{
		if (result > (SIZE_MAX - (str[i] - 48)) / 10 && sign > 0)
			return (-1);
		else if (result > (SIZE_MAX - (str[i] - 48)) / 10 && sign < 0)
			return (0);
		result = (result * 10 + str[i] - 48);
		i++;
	}
	return (result *= sign);
}
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_atoi("-2147483648214748364821474836"));
//     printf("%d\n", atoi("-2147483648214748364821474836"));
// }