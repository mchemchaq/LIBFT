/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:38:55 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 20:05:44 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newlst)
{
	t_list	*p;

	if (lst == NULL || newlst == NULL)
		return ;
	if (*lst == NULL)
		*lst = newlst;
	else
	{
		p = ft_lstlast(*lst);
		p -> next = newlst;
	}
}
