/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:43:07 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/28 17:19:06 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	p = lst;
	if (!lst || !f)
		return ;
	while (p)
	{
		f(p -> content);
		p = p -> next;
	}
}
#include <stdio.h>
#include <string.h>

void f(void *c)
{
    printf("%s\n", (char *)c );
}
int main(void) 
{
    t_list *liste = NULL;
	t_list *nv = ft_lstnew("maryem");
	t_list *nv1 = ft_lstnew("1337");
	t_list *nv2 = ft_lstnew("hello word");
    t_list *nv3 = ft_lstnew("how are you");
	liste = nv;
	ft_lstadd_front(&liste , nv1);
    ft_lstadd_front(&liste, nv2);
    ft_lstadd_front(&liste, nv3);
    ft_lstiter(liste, &f);
    t_list *p = liste;
	while (p != NULL)
	{
		printf("content : %s\n", p -> content);
		p = p -> next;
	}
}