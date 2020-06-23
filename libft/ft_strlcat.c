/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:35:47 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/07 18:02:49 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t x;
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
	{
		return (srclen + dstsize);
	}
	x = 0;
	while (dst[x] && x < (dstsize - 1))
	{
		x++;
	}
	while (*src && x < (dstsize - 1))
	{
		dst[x] = *src++;
		x++;
	}
	dst[x] = '\0';
	return (dstlen + srclen);
}
