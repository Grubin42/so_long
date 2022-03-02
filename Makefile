# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grubin <grubin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 15:11:00 by grubin            #+#    #+#              #
#    Updated: 2022/03/02 15:10:22 by grubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g #-fsanitize=address

NAME = so_long 

SRC = so_long.c gnl_struc/get_next_line_utils.c gnl_struc/get_next_line.c get_array_with_ber.c put_tilesets.c put_tiles_player.c put_tiles_ground.c put_tiles_exit.c put_tiles_coins.c put_tiles_wall.c check_key.c move_right.c move_down.c move_left.c move_up.c check_error.c check_error_bis.c print_count.c put_tiles_monster.c move_monster.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	make -C ft_printf
	make -C libft
	make -C mlx
	$(CC) $(CFLAGS) $(SRC) ft_printf/libftprintf.a libft/libft.a mlx/libmlx.a -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	make clean -C mlx
	make clean -C libft
	make clean -C ft_printf
	rm -f $(OBJ)

fclean : clean
	make fclean -C libft
	make fclean -C ft_printf
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re