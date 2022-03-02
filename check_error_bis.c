/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_bis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:51:30 by grubin            #+#    #+#             */
/*   Updated: 2022/03/01 09:15:59 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_count_item(char c, t_data *img)
{
    if (c == 'P')
        img->count_p++;
    if (c == 'E')
        img->count_e++;
    if (c == 'C')
        img->count_c++;
}
void    ft_check_error_bis(t_data *img)
{
    if (img->count_p < 1 || img->count_p > 1)
    {
        write (1, "Error\nthere are too many players\n", 35);
        exit(0);
    }
    if (img->count_e < 1)
    {
        write (1, "Error\nthere is no exit\n", 25);
        exit(0);
    }
    if (img->count_c < 1)
    {
        write (1, "Error\nthere is no coins\n", 26);
        exit(0);
    }
}
