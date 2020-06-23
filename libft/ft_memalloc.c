/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:52:12 by mmasima           #+#    #+#             */
/*   Updated: 2019/07/19 14:45:10 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		*(ptr + i) = 0;
	return (ptr);
}

