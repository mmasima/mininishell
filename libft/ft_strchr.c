/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:55:19 by mmasima           #+#    #+#             */
/*   Updated: 2019/07/08 11:11:21 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	char	ch;

	p = (char*)s;
	ch = (char)c;
	while (*p && *p != ch)
	{
		p++;
	}
	if (*p == ch)
	{
		return (p);
	}
	if (!ch && *p == '\0')
	{
		return (p);
	}
	return (NULL);
}
