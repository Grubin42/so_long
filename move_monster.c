/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_monster.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:09:56 by grubin            #+#    #+#             */
/*   Updated: 2022/03/02 16:16:33 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_move_monster(t_data *img)
{
    printf("Pi = %d\nPj = %d\nMi = %d\nMj = %d\n\n\n", img->player_i, img->player_j, img->monster_i, img->monster_j);
    if (img->player_i < img->monster_i)
    {
        if (img->array[img->monster_j][img->monster_i - 1] == '0')
        {
            img->array[img->monster_j][img->monster_i - 1] = 'M';
            img->array[img->monster_j][img->monster_i] = '0';
        }
    }
    else if (img->player_i > img->monster_i)
    {
        if (img->array[img->monster_j][img->monster_i + 1] == '0')
        {
        img->array[img->monster_j][img->monster_i + 1] = 'M';
        img->array[img->monster_j][img->monster_i] = '0';
        }
    }
    else if (img->player_j < img->monster_j)
    {
        if (img->array[img->monster_j - 1][img->monster_i] == '0')
        {
            img->array[img->monster_j - 1][img->monster_i] = 'M';
            img->array[img->monster_j][img->monster_i] = '0';
        }
    }
    else if (img->player_j > img->monster_j)
    {
        if (img->array[img->monster_j + 1][img->monster_i] == '0')
        {
            img->array[img->monster_j + 1][img->monster_i] = 'M';
            img->array[img->monster_j][img->monster_i] = '0';
        }
    }
}