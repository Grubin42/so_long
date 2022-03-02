/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:46:45 by grubin            #+#    #+#             */
/*   Updated: 2021/11/25 11:01:18 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexaptr(unsigned long nbr, char *str, int c)
{
	if (nbr > 15)
	{
		c = ft_puthexaptr(nbr / 16, str, c + 1);
		ft_putchar(str[nbr % 16], 0);
	}
	else
		c = ft_putchar(str[nbr], c);
	return (c);
}

int	ft_putptr(void *ptr, char *str, int c)
{
	write(1, "0x", 2);
	c += 2;
	c = ft_puthexaptr((unsigned long)ptr, str, c);
	return (c);
}
