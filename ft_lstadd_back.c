/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:38:55 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/24 20:37:36 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_lstadd_back(t_list **lst, t_list *newlst)
{
    t_list *p;
    
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

// #include <stdio.h>
// int	main()
// {	
// 	t_list *liste = NULL;
// 	t_list *nv = ft_lstnew("maryem");
// 	t_list *nv1 = ft_lstnew("1337");
// 	t_list *nv2 = ft_lstnew("hello word");
// 	liste = nv;
// 	ft_lstadd_front(&liste , nv1);
//     ft_lstadd_back(&liste, nv2);
//     t_list *p = liste;
//     while (p != NULL)
// 	{
// 		printf("content : %s\n", p -> content);
// 		p = p -> next;
// 	}
// }