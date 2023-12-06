/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:10:55 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 19:59:07 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*i;
	int		s;

	s = 0;
	i = lst;
	if (lst == NULL)
		return (0);
	while (i != NULL)
	{
		s += 1;
		i = i -> next;
	}
	return (s);
}
