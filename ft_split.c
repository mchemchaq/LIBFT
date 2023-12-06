/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:15:19 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/06 21:35:25 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**erreur(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	cont_word(char const *str, char c)
{
	int	i;
	int	cont;
	int	pp;

	i = 0;
	cont = 0;
	while (str[i])
	{
		pp = 0;
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
		{
			i++;
			pp = 1;
		}
		if (pp)
			cont += 1;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = -1;
	j = 0;
	if (!s)
		return (NULL);
	tab = (char **)ft_calloc((cont_word(s, c) + 1) * sizeof(char *), 1);
	while (tab == NULL)
		return (NULL);
	while (++k < cont_word(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		tab[k] = ft_substr(s, j, i - j);
		if (!tab[k])
			return (erreur(tab));
	}
	return (tab);
}
