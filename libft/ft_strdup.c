/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:55:21 by mmasima           #+#    #+#             */
/*   Updated: 2019/07/08 11:13:57 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*copy;
	unsigned int	l;

	l = ft_strlen(s1);
	copy = (char *)malloc((l + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, s1);
	copy[l] = '\0';
	return (copy);
	free(copy);
}
