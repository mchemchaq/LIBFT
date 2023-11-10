/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:39:32 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/04 18:49:05 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero (void *s, size_t n)
{
    char    *str;
    
    str = (char *)s;
    while (n > 0)
    {
        *(str++) = 0;
        n--;
    }
}
// int main()
// {
//     char myString[] = "Hello, World!";
//     size_t len = 5; 

//     printf("Avant ft_bzero : %s\n", myString);

//     ft_bzero(myString, len); 

//     printf("Après ft_bzero : %s\n", myString);

//     return 0;
// }