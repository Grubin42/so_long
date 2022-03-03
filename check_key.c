/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:45:38 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 09:21:16 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_key(int keycode, t_data *img)
{
	img->keycode_value = keycode;
	if (keycode == 53)
		exit(0);
	if (keycode == 13 || keycode == 126)
		ft_move_up(img);
	if (keycode == 0 || keycode == 123)
		ft_move_left(img);
	if (keycode == 1 || keycode == 125)
		ft_move_down(img);
	if (keycode == 2 || keycode == 124)
		ft_move_right(img);
	return (0);
}
