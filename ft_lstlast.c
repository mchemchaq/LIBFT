/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:04:51 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/22 21:28:53 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list *p;
    p = lst ;
    while (p != NULL && p -> next != NULL)
    {
        p = p -> next;
    }
    return (p);
    
}
// #include <stdio.h>
// int	main()
// {	
// 	t_list *liste = NULL;
// 	t_list *nv = ft_lstnew("maryem");
// 	t_list *nv1 = ft_lstnew("1337");
// 	t_list *nv2 = ft_lstnew("hello word");
// 	liste = nv1;
// 	ft_lstadd_front(&liste , nv);
// 	ft_lstadd_front(&liste , nv2);
// 	t_list *frst;
//     frst  = ft_lstlast(liste);
    
// 	printf("first element is  : %s\n", frst -> content);
// }