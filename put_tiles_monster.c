/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_monster.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:24:50 by grubin            #+#    #+#             */
/*   Updated: 2022/03/02 14:27:08 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void        ft_put_tiles_monster(t_data *img)
{
    img->relative_path = "img/monster.xpm";
    ft_put_img(img);
    mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);    
}