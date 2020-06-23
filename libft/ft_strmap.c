/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:27:58 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/26 17:07:15 by obie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	unsigned int	x;
	char			*str;

	if (!s || !f)
		return (0);
	x = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[x] != '\0')
	{
		str[x] = f(s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
