/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:14:46 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/28 18:46:52 by mchemcha         ###   ########.fr       */
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
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
// #include <stdio.h>
//  void *f(void *ptr)
//  {
// 	char *str = (char *)ptr;
// 	int i = 0;
// 	while (str &&  str[i])
// 	{
// 		if(str[i] == ' ')
// 			str[i] = ',';
// 		i++;
// 	}
// 	return (str);
//  }
// int main(void) 
// {
//     t_list *liste;
// 	t_list *nv = ft_lstnew(ft_strdup("maryem "));
// 	t_list *nv1 = ft_lstnew(ft_strdup("1337 "));
// 	t_list *nv2 = ft_lstnew(ft_strdup("hello word "));
//     t_list *nv3 = ft_lstnew(ft_strdup("how are you "));
// 	liste = nv;
// 	ft_lstadd_front(&liste , nv1);
//     ft_lstadd_front(&liste, nv2);
//     ft_lstadd_front(&liste, nv3);
//     t_list *link = ft_lstmap(liste, &f,&free);
//     t_list *p = link;
// 	while (p != NULL)
// 	{
// 		printf("content : %s\n", (char *)p -> content);
// 		p = p -> next;
// 	} 
// }