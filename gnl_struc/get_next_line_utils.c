/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:19:44 by grubin            #+#    #+#             */
/*   Updated: 2022/02/23 12:45:29 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlenbis(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*join(char *str, char c)
{
	char	*mem;
	int		i;
	int		len;

	i = 0;
	len = ft_strlenbis(str);
	mem = malloc(len + 2);
	if (mem == 0)
		return (0);
	while (i < len)
	{
		mem[i] = str[i];
		i++;
	}
	mem[i] = c;
	mem[i + 1] = 0;
	if (str)
		free(str);
	return (mem);
}
