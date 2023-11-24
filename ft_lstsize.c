/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:10:55 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/23 19:27:26 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *i;
    int     s;
    
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

// #include <stdio.h>
// int	main()
// {	
// 	t_list *liste = NULL;
// 	t_list *nv = ft_lstnew("maryem");
// 	t_list *nv1 = ft_lstnew("1337");
// 	//t_list *nv2 = ft_lstnew("hello word");
// 	liste = nv;
// 	ft_lstadd_front(&liste , nv1);
// 	//ft_lstadd_front(&liste , nv2);
// 	int i = ft_lstsize(liste);
//     printf("%d", i);
	
// }