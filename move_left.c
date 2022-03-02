/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:13:57 by grubin            #+#    #+#             */
/*   Updated: 2022/03/02 16:09:07 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_go_left(t_data *img)
{
    img->x = 0;
    img->y = 0;
    img->array[img->player_j][img->player_i - 1] = 'P';
    img->array[img->player_j][img->player_i] = '0';
    img->count_move++;
    ft_put_tilesets(img);
    ft_print_count(img);
    ft_printf("you have performed %d moves\n", img->count_move);
}

void    ft_move_left(t_data *img)
{
    if (img->array[img->player_j][img->player_i - 1] == '0')
        ft_go_left(img);
    else if (img->array[img->player_j][img->player_i - 1] == 'C')
    {
        img->x = 0;
        img->y = 0;
        img->array[img->player_j][img->player_i - 1] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        img->coins--;
        img->count_c--;
        img->count_move++;
        ft_put_tilesets(img);
        ft_print_count(img);
        ft_printf("you have performed %d moves\n", img->count_move);
    }
    else if ((img->array[img->player_j][img->player_i - 1] == 'E'
            && img->coins == 0) || img->array[img->player_j][img->player_i - 1] == 'M')
        exit(0); 
}