/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <mmasima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:39:01 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/05 16:36:49 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;

	s = (unsigned char *)str;
	while (n--)
	{
		if (*s != (unsigned char)c)
			s++;
		else
			return (s);
	}
	return (0);
}
