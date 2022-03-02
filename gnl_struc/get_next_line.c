/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:16:29 by grubin            #+#    #+#             */
/*   Updated: 2021/12/14 16:35:37 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_read	info = {.fd = -1};
	char			c;
	char			*str;

	str = 0;
	if (info.fd != fd)
		if (!init_check(fd, &info))
			return (0);
	c = read_check(&info);
	while (c)
	{
		str = join(str, c);
		if (c == '\n')
			return (str);
		c = read_check(&info);
	}
	return (str);
}

int	init_check(int fd, t_read *info)
{
	info->pos = 0;
	info->fd = fd;
	info->max = read(info->fd, info->data, BUFFER_SIZE);
	if (info->max < 0)
		return (0);
	else
		return (1);
}

char	read_check(t_read *info)
{
	char	result;

	if (info->pos >= info->max)
	{
		info->max = read(info->fd, info->data, BUFFER_SIZE);
		info->pos = 0;
		if (info->max <= 0)
			return (0);
	}
	result = info->data[info->pos];
	info->pos++;
	return (result);
}
