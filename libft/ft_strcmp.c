/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:32:59 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/26 17:00:55 by obie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (((unsigned char)*s1 - ((unsigned char)*s2)) > 0)
		return (1);
	else if (((unsigned char)*s1 - ((unsigned char)*s2)) < 0)
		return (-1);
	else
		return (0);
}
