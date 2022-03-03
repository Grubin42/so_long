/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:44:33 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 09:04:39 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_tiles_exit_open(t_data *img)
{
	img->relative_path = "img/door_open.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void	ft_put_tiles_exit_close(t_data *img)
{
	img->relative_path = "img/door_close.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void	ft_put_tiles_exit(t_data *img)
{
	if (img->count_c > 0)
		ft_put_tiles_exit_close(img);
	else
		ft_put_tiles_exit_open(img);
}
