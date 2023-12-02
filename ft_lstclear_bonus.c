/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:49:59 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/01 19:19:09 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (!del || *lst == NULL)
		return ;
	while (*lst && lst)
	{
		p = *lst;
		*lst = p->next;
		ft_lstdelone(p, del);
	}
}
// void my_del_function(void *data) 
// {
//     printf("%s", data);
// }

// int main()
// {
//     t_list *nv =  ft_lstnew("maryem");    
//     ft_lstclear(&nv, my_del_function);
// }