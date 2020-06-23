/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:27:40 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/24 10:33:20 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	x;
	char	*dst2;
	char	*src2;

	x = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (x < n)
	{
		dst2[x] = src2[x];
		if ((unsigned char)src2[x] == (unsigned char)c)
			return ((char *)dst + x + 1);
		x++;
	}
	return (NULL);
}
