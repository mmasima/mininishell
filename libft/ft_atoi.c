/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:02:17 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/18 15:11:54 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		exceeds_n(int n)
{
	if (n == -1)
		return (0);
	return (-1);
}

int				ft_atoi(const char *str)
{
	int			x;
	int			lim;
	int			n;

	n = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == 32 || *str == '0')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = -1;
		str++;
	}
	lim = 0;
	x = 0;
	while (*str >= '0' && *str <= '9' && *str)
	{
		x = (x * 10) + (*str++ - '0');
		if (lim >= 19)
			return (exceeds_n(n));
		lim++;
	}
	return (x * n);
}
