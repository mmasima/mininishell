/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:15:27 by mmasima           #+#    #+#             */
/*   Updated: 2019/06/26 17:24:11 by obie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t		start;
	size_t		len;
	char		*str;

	start = 0;
	if (!s)
		return (NULL);
	while (((s[start] == ' ') || (s[start] == '\n')
				|| (s[start] == '\t')) && (s[start] != '\0'))
		start++;
	len = ft_strlen(s);
	while (((s[len - 1] == ' ') || (s[len - 1] == '\n')
			|| (s[len - 1] == '\t')) && (s[len - 1] != '\0'))
		len--;
	if (len < start)
		len = start;
	str = ft_strsub(s, start, len - start);
	if (str)
		return (str);
	return (NULL);
}
