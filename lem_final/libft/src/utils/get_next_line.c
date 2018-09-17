/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:36:18 by akhercha          #+#    #+#             */
/*   Updated: 2018/06/07 00:41:55 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isin(char *str, char c)
{
	int		i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		ft_getchar_pos(char *str, char c)
{
	int			i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int		ft_addstr(char **line, char const *buff)
{
	char	*fresh;
	int		n;

	if ((n = ft_getchar_pos((char*)buff, '\n')) < 0)
		return (-1);
	if (!(fresh = ft_strnew(ft_strlen(*line) + n)))
		return (-1);
	ft_strcpy(fresh, *line);
	free(*line);
	ft_strncat(fresh, buff, n);
	ft_strcpy((char*)buff, &(buff[(buff[n] == '\n') ? (n + 1) : n]));
	*line = fresh;
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char		buff[BUFF_SIZE + 1];
	int				pos;
	int				ret;

	if (fd == -1 || !line || !(*line = ft_strnew(100000)) || BUFF_SIZE <= 0)
		return (-1);
	while (1)
	{
		if (!buff[0])
			ft_bzero(buff, BUFF_SIZE + 1);
		if (!buff[0] && (ret = read(fd, buff, BUFF_SIZE)) < 0)
			return (-1);
		if (!ret && **line)
			return (1);
		if (!ret && !buff[0])
			return (0);
		if ((pos = ft_isin(buff, '\n')) < 0 ||
				(ft_addstr(line, buff)) < 0)
			return (-1);
		if (pos)
			return (1);
	}
}
