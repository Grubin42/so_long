/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:54:52 by grubin            #+#    #+#             */
/*   Updated: 2022/03/03 09:09:47 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(void)
{
	exit(0);
}

int	main(int argc, char **argv)
{
	t_data	img;

	img.count_move = 0;
	img.y = 0;
	if (argc <= 1)
		exit(0);
	img.fd = open(argv[1], O_RDONLY);
	ft_get_array_ber(&img, img.fd);
	ft_check_error(argv[1], &img);
	ft_check_error_bis(&img);
	img.mlx = mlx_init();
	img.mlx_win = mlx_new_window(img.mlx, img.size_i * 30, img.size_j * 30,
			"Hello wolrd!");
	ft_put_tilesets(&img);
	ft_print_count(&img);
	mlx_key_hook(img.mlx_win, ft_check_key, &img);
	mlx_hook(img.mlx_win, 17, 1L << 0, ft_close, &img);
	mlx_loop(img.mlx);
}
