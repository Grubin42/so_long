/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:55:20 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 09:33:01 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "ft_printf/ft_printf.h"
# include "mlx/mlx.h"
# include <stdio.h>
# include <fcntl.h>
# include "gnl_struc/get_next_line.h"
# include "libft/libft.h"

typedef struct s_data
{
	void	*mlx;
	void	*mlx_win;
	void	*img;
	int		keycode_value;
	int		count_move;
	int		count_p;
	int		count_e;
	int		count_c;
	int		fd;
	int		size_j;
	int		size_i;
	int		coins;
	int		i;
	int		j;
	int		x;
	int		y;
	int		player_i;
	int		player_j;
	int		monster_i;
	int		monster_j;
	char	*relative_path;
	char	**array;
}			t_data;
void		ft_print_count(t_data *img);
void		ft_count_item(char c, t_data *img);
void		ft_check_error_bis(t_data *img);
void		ft_check_error(char *argv, t_data *img);
int			ft_check_key(int keycode, t_data *img);
void		ft_move_right(t_data *img);
void		ft_move_down(t_data *img);
void		ft_move_left(t_data *img);
void		ft_move_up(t_data *img);
void		ft_get_array_ber(t_data *img, int fd);
void		ft_put_img(t_data *img);
void		ft_put_tilesets(t_data *img);
void		ft_put_tiles_player(t_data *img);
void		ft_put_tiles_ground(t_data *img);
void		ft_put_tiles_wall(t_data *img);
void		ft_put_tiles_coins(t_data *img);
void		ft_put_tiles_exit(t_data *img);
void		ft_put_tiles_monster(t_data *img);
void		ft_move_monster(t_data *img);

#endif
