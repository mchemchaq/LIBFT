/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:56:47 by mchemcha          #+#    #+#             */
/*   Updated: 2023/11/08 17:13:08 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t	srclen;
  size_t  dstlen;
	size_t  i;

  i  = 0;
  srclen = ft_strlen(src);
  dstlen = ft_strlen(dst);
  if (size == 0)
    return (size + srclen);
  if (dstlen >= size)
    return (srclen + size);
  while (src[i] && i + dstlen < size - 1)
  {
    dst[dstlen + i] = src[i];
    i++;
  }
  dst[dstlen + i] = '\0';
  return (srclen + dstlen);
}
