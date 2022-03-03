/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:48:19 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 08:59:04 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_map_ber(char *argv)
{
	int	size;

	size = ft_strlen(argv);
	if (argv[size - 1] != 'r' || argv[size - 2] != 'e'
		|| argv[size - 3] != 'b' || argv[size - 4] != '.')
	{
		write(1, "Error\nnot a .ber file\n", 23);
		exit(0);
	}
}

void	ft_check_around_map(int i, int j, t_data *img)
{
	if (img->array[0][i] != '1' || img->array[img->size_j - 1][i] != '1')
	{
		write (1, "Error\nyou have a hole in your wall\n", 36);
		exit(0);
	}
	if (img->array[j][0] != '1' || img->array[j][img->size_i - 1] != '1')
	{
		write (1, "Error\nyou have a hole in your wall\n", 36);
		exit(0);
	}
}

void	ft_check_items(char c)
{
	if (c != '1' && c != '0' && c != 'P' && c != 'E' && c != 'C'
		&& c != 'M')
	{
		write (1, "Error\nan item is missing\n", 26);
		exit(0);
	}
}

void	ft_check_display(t_data *img)
{
	if (img->size_i * 30 > 1920 || img->size_j * 30 > 1080)
	{
		write (1, "Error\ndisplay\n", 15);
		exit(0);
	}
}

void	ft_check_error(char *argv, t_data *img)
{
	int	i;
	int	j;

	j = 0;
	img->count_p = 0;
	img->count_e = 0;
	img->count_c = 0;
	ft_check_map_ber(argv);
	ft_check_display(img);
	while (j < img->size_j)
	{
		i = 0;
		while (img->array[j][i] != '\0')
		{
			ft_check_items(img->array[j][i]);
			ft_check_around_map(i, j, img);
			ft_count_item(img->array[j][i], img);
			i++;
		}
		j++;
	}
}
