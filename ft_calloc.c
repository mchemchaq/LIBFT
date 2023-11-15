/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:35 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/15 09:14:23 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
// int main() {

//     int i;
//     int * pointer ;

//     pointer = (int *) calloc( 5, sizeof(int) );
//     printf("%d", pointer[6]);
// //assert( pointer != NULL );

// //     for ( i=0; i<5-1; i++ ) {
// //         pointer[i] = i;
// //     }
// //     for (i=0; i<5; i++ ) {
// //         printf( "%d ", pointer[i] );
// //     }
// //     printf( "\n" );

// //     return 0;
// //
// }