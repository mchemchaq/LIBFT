/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:47:11 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/17 20:58:27 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int len_nbr(int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        i++;
        n *= -1; 
    }
    while (n)
    {
        n = n / 10;
        i++;
    }
    return (i);
}
static char *swap_str(char *nbr)
{
    char swap;
    int debut;
    int fin;

    debut = 0;
    fin = ft_strlen(nbr) - 1;
    while (debut <= fin )
    {

       swap = nbr[debut];
       nbr[debut] = nbr[fin];
       nbr[fin] = swap; 
       fin--;
       debut++;
    }
    return (nbr);
}

void    cpyls(int n, char *nbr)
{
    int i;
    int m;

    i = 0;
    m = 0;
    if (n == 0 )
        nbr[i] = '0';
    if (n < 0)
    {
        n = -n;
        m = 1;
    }
    while (n)
    {
        nbr[i] = (n % 10) + '0';
        i++;
        n /= 10;
    }
    if (m == 1)
        nbr[i++] = '-';
    nbr[i] = '\0';
}

char *ft_itoa(int n)
{
    char *nbr;
    int m;
    
    m = 0;
    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    nbr = malloc(len_nbr(n) + 1);
    if (!nbr)
        return (NULL);
    cpyls(n, nbr);
    return swap_str(nbr);
}
#include <stdio.h>

int main()
{
    int n = -274836;
    printf("%s", ft_itoa(n));
}