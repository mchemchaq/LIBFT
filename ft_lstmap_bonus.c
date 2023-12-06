/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:14:46 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 19:00:09 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;

	new = NULL;
	while (lst && f)
	{
		node = ft_lstnew(NULL);
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
