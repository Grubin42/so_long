/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:51:04 by grubin            #+#    #+#             */
/*   Updated: 2021/11/25 10:50:14 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr, int c)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (c + 11);
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		c = ft_putchar('-', c);
	}
	if (nbr > 9)
	{
		c = ft_putnbr(nbr / 10, c + 1);
		ft_putnbr(nbr % 10, 0);
	}
	else
		c = ft_putchar(nbr + '0', c);
	return (c);
}
