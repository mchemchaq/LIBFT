/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:48:04 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/24 20:58:57 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL)
        return ;
    if (del != NULL)
    {
        if (lst->content != NULL)
            del(lst->content);
    }
    free (lst);
}
// void my_del_function(void *data) 
// {
//     printf("%s", data);
// }

// int main()
// {
//     t_list *nv =  ft_lstnew("maryem");
    
//     ft_lstdelone(nv, my_del_function);
// }