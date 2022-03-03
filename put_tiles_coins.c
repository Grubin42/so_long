/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_coins.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:43:52 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 08:47:40 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_tiles_coins(t_data *img)
{
	img->relative_path = "img/coins.xpm";
	ft_put_img(img);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}
