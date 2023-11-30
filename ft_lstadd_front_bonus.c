/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:23:49 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/28 15:39:28 by mchemcha         ###   ########.fr       */
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
// #include <stdio.h>
// int	main()
// {	
// 	t_list *liste = NULL;
// 	t_list *nv = ft_lstnew("maryem");
// 	t_list *nv1 = ft_lstnew("1337");
// 	t_list *nv2 = ft_lstnew("hello word");
// 	liste = nv;
// 	ft_lstadd_front(&liste , nv1);
// 	ft_lstadd_front(&liste , nv2);
// 	t_list *p = liste;
// 	while (p != NULL)
// 	{
// 		printf("content : %s\n", p -> content);
// 		p = p -> next;
// 	}
// }