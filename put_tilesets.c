/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tilesets.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:05:23 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 12:06:30 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_img(t_data *img)
{
	int	w;
	int	h;

	img->img = mlx_xpm_file_to_image(img->mlx, img->relative_path, &w, &h);
}

void	ft_check_value_array(t_data *img, int c)
{
	if (c == 48)
		ft_put_tiles_ground(img);
	if (c == 49)
		ft_put_tiles_wall(img);
	if (c == 80)
		ft_put_tiles_player(img);
	if (c == 67)
		ft_put_tiles_coins(img);
	if (c == 69)
		ft_put_tiles_exit(img);
	if (c == 77)
		ft_put_tiles_monster(img);
}

void	ft_check_p_c(t_data *img)
{
	if (img->array[img->i][img->j] == 80)
	{
		img->player_j = img->i;
		img->player_i = img->j;
	}
	if (img->array[img->i][img->j] == 77)
	{
		img->monster_j = img->i;
		img->monster_i = img->j;
	}
	if (img->array[img->i][img->j] == 67)
		img->coins++;
}

void	ft_put_tilesets(t_data *img)
{
	img->i = 0;
	img->j = 0;
	img->coins = 0;
	while (img->i < img->size_j)
	{
		img->j = 0;
		img->x = 0;
		while (img->array[img->i][img->j] != '\0')
		{
			ft_check_p_c(img);
			ft_check_value_array(img, img->array[img->i][img->j]);
			img->x += 30;
			img->j++;
		}
		img->y += 30;
		img->i++;
	}
	ft_move_monster(img);
}
