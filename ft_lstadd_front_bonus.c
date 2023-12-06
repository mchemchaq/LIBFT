/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:23:49 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 21:37:23 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *newlst)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		newlst -> next = NULL;
	newlst -> next = *lst;
	*lst = newlst;
}
