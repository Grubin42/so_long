/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_ground.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:42:43 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 09:19:49 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_tiles_ground(t_data *img)
{
	img->relative_path = "img/ground.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}
