/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:38:02 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/19 15:41:57 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cara;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	cara = malloc(ft_strlen(s) + 1);
	if (!cara)
		return (NULL);
	while (s[i])
	{
		cara[i] = f(i, s[i]);
		i++;
	}
	cara[i] = '\0';
	return (cara);
}

// char custom_function(unsigned int i, char c)
// {
//     if (c >= 'a' && c <= 'z')
//         c = c - 32;
//     return (c);
// }
// #include <stdio.h>
// int main()
// {
//     const char *str = "Hello";
//     char *result = ft_strmapi(str, &custom_function);
//     printf("Original string: %s\n", str);
//     printf("Mapped string  : %s\n", result);

//     // Free the allocated memory
//     free(result);

//     return 0;
// }