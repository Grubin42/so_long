/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_player.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:30:33 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 09:40:01 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_tiles_player_left(t_data *img)
{
	img->relative_path = "img/player_left.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void	ft_put_tiles_player_right(t_data *img)
{
	img->relative_path = "img/player_right.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void	ft_put_tiles_player_up(t_data *img)
{
	img->relative_path = "img/player_up.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void	ft_put_tiles_player_down(t_data *img)
{
	img->relative_path = "img/player_down.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void	ft_put_tiles_player(t_data *img)
{
	ft_put_tiles_player_left(img);
	if (img->keycode_value == 0 || img->keycode_value == 123)
		ft_put_tiles_player_left(img);
	if (img->keycode_value == 2 || img->keycode_value == 124)
		ft_put_tiles_player_right(img);
	if (img->keycode_value == 13 || img->keycode_value == 126)
		ft_put_tiles_player_up(img);
	if (img->keycode_value == 1 || img->keycode_value == 123)
		ft_put_tiles_player_down(img);
}
