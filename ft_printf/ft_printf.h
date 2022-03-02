/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:28:27 by grubin            #+#    #+#             */
/*   Updated: 2021/11/18 16:24:32 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>

int	ft_check(va_list ap, int pourcentType, int c);
int	ft_printf(const char *str, ...);
int	ft_putchar(char character, int c);
int	ft_putstr(char *str, int c);
int	ft_putnbr(int nbr, int c);
int	ft_putunsigned(unsigned int nbr, int c);
int	ft_puthexa(unsigned int nbr, char *str, int c);
int	ft_putptr(void *ptr, char *str, int c);
int	ft_puthexaptr(unsigned long nbr, char *str, int c);

#endif
