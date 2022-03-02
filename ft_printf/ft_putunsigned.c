/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:26:43 by grubin            #+#    #+#             */
/*   Updated: 2021/11/16 16:04:40 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr, int c)
{
	if (nbr > 9)
	{
		c = ft_putunsigned(nbr / 10, c + 1);
		ft_putunsigned(nbr % 10, 0);
	}
	else
		c = ft_putchar(nbr + '0', c);
	return (c);
}
