/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:58:47 by grubin            #+#    #+#             */
/*   Updated: 2022/03/01 16:37:24 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_print_count(t_data *img)
{
    char    *str;
    char    *str_word;
    char    *dest;
    
    str_word = "movement performed = ";
    str = ft_itoa(img->count_move);
    dest = ft_strjoin(str_word, str);
    mlx_string_put(img->mlx, img->mlx_win, 5, 20, 0xff00ff ,dest);
    free(str);
    free(dest);
}