/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:17:40 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/21 15:20:44 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	while (*s1 == *s2 && *s1 != '\0' && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if ((unsigned char)*s1 - (unsigned char)*s2 > 0)
		return (1);
	else if ((unsigned char)*s1 - (unsigned char)*s2 < 0)
		return (-1);
	else
		return (0);
}
