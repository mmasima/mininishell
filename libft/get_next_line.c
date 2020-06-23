/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasima <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 15:31:31 by mmasima           #+#    #+#             */
/*   Updated: 2019/07/08 11:11:24 by mmasima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}

static int	ft_readline(char **buffer, char **line)
{
	char *temp;

	if (ft_strchr(*buffer, '\n'))
	{
		*line = ft_strsub(*buffer, 0, ft_len(*buffer, '\n'));
		temp = ft_strdup(ft_strchr(*buffer, '\n') + 1);
		ft_strdel(buffer);
		*buffer = ft_strdup(temp);
		free(temp);
	}
	else
	{
		*line = ft_strdup(*buffer);
		ft_strdel(buffer);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*fd_arr[1024];
	char		buf[BUFF_SIZE + 1];
	int			ret;
	char		*temp;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (fd_arr[fd] == NULL)
		fd_arr[fd] = ft_strnew(1);
	ret = 0;
	while (!ft_strchr(fd_arr[fd], '\n') && (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		temp = ft_strjoin(fd_arr[fd], buf);
		ft_strdel(&fd_arr[fd]);
		fd_arr[fd] = ft_strdup(temp);
		ft_strdel(&temp);
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (fd_arr[fd] == NULL || fd_arr[fd][0] == '\0'))
		return (0);
	else
		return (ft_readline(&fd_arr[fd], line));
}
