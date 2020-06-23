/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:01:40 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/18 16:10:43 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	int len;
	int y;

	len = 0;
	y = 0;
	if (small[0] == '\0')
		return ((char *)big);
	while (big[len] != '\0')
	{
		if (big[len] == small[0])
		{
			y = 1;
			while (small[y] != '\0' && big[len + y] == small[y])
				y++;
			if (small[y] == '\0')
				return ((char*)&big[len]);
		}
		len++;
	}
	return (0);
}
