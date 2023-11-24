/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:35 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/24 21:42:32 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	if (size >= 2147483647|| count >= 2147483647)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
// int main() {

    // int i;
    // int * pointer ;
    // int * pointer1 ;

    // pointer = (int *) calloc( 878787878787878787, sizeof(int) );
    // pointer1 = (int *) ft_calloc( 878787878787878778, sizeof(int) );
	// printf("")
    // printf("%d", pointer[6]);
//assert( pointer != NULL );

//     for ( i=0; i<5-1; i++ ) {
//         pointer[i] = i;
//     }
//     for (i=0; i<5; i++ ) {
//         printf( "%d ", pointer[i] );
//     }
//     printf( "\n" );

//     return 0;
//

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	printf("%s\n",ft_calloc(8787878787878787 ,1));
// 	// printf("%s",calloc(8787878787878787 ,1));
// }