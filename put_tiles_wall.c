/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_wall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:43:21 by grubin            #+#    #+#             */
/*   Updated: 2022/03/02 14:01:05 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void  ft_put_tiles_wall_border(t_data *img)
{
    img->relative_path = "img/wall.xpm";
    ft_put_img(img);
    mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void    ft_put_tiles_wall_interior(t_data *img)
{
    img->relative_path = "img/wall_indoor.xpm";
    ft_put_img(img);
    mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void    ft_put_tiles_wall(t_data *img)
{
    if (img->j == img->size_i - 1 || img->j == 0)
        ft_put_tiles_wall_border(img);
    else if (img->i == img->size_j - 1 || img->i == 0)
        ft_put_tiles_wall_border(img);
    else
        ft_put_tiles_wall_interior(img);
}