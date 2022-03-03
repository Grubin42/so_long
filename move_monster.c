/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_monster.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:09:56 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 09:17:02 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_monster_left(t_data *img)
{
	if (img->array[img->monster_j][img->monster_i - 1] == '0')
	{
		img->array[img->monster_j][img->monster_i - 1] = 'M';
		img->array[img->monster_j][img->monster_i] = '0';
	}
}

void	ft_move_monster_right(t_data *img)
{
	if (img->array[img->monster_j][img->monster_i + 1] == '0')
	{
		img->array[img->monster_j][img->monster_i + 1] = 'M';
		img->array[img->monster_j][img->monster_i] = '0';
	}
}

void	ft_move_monster_up(t_data *img)
{
	if (img->array[img->monster_j - 1][img->monster_i] == '0')
	{
		img->array[img->monster_j - 1][img->monster_i] = 'M';
		img->array[img->monster_j][img->monster_i] = '0';
	}
}

void	ft_move_monster_down(t_data *img)
{
	if (img->array[img->monster_j + 1][img->monster_i] == '0')
	{
		img->array[img->monster_j + 1][img->monster_i] = 'M';
		img->array[img->monster_j][img->monster_i] = '0';
	}
}

void	ft_move_monster(t_data *img)
{
	if (img->player_i < img->monster_i)
		ft_move_monster_left(img);
	else if (img->player_i > img->monster_i)
		ft_move_monster_right(img);
	else if (img->player_j < img->monster_j)
		ft_move_monster_up(img);
	else if (img->player_j > img->monster_j)
		ft_move_monster_down(img);
}
