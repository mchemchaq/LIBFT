/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:48:30 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/22 20:17:30 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list -> content = content;
	list -> next = NULL;
	return (list);
}

// #include <stdio.h>
// int	main()
// {
// 	t_list *liste = NULL;
// 	t_list *nv = ft_lstnew("maryem");
// 	liste = nv;
// 	printf("Contenu du nouvel élément : %s\n", (char *)nv->content);
// }