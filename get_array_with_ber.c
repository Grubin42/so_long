/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_array_with_ber.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:31:50 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 13:22:35 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_size_array(t_data *img)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	img->size_i = 0;
	while (j < img->size_j)
	{
		i = 0;
		while (img->array[j][i] != '\0')
			i++;
		j++;
	}
	img->size_i = i;
}

void	ft_get_array_ber(t_data *img, int fd)
{
	char	*tab;
	char	*str_full_ber;
	char	*tmp;

	img->size_j = -1;
	str_full_ber = ft_strdup("");
	while (1)
	{
		tmp = str_full_ber;
		tab = get_next_line(fd);
		img->size_j++;
		if (tab != NULL)
			str_full_ber = ft_strjoin(str_full_ber, tab);
		if (tab == NULL)
			break ;
		free(tmp);
		free (tab);
	}
	img->array = ft_split(str_full_ber, '\n');
	free (str_full_ber);
	ft_check_size_array(img);
	close(fd);
}
