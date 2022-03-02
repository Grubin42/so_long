/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:07:42 by grubin            #+#    #+#             */
/*   Updated: 2021/11/25 11:04:27 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nbr, char *str, int c)
{
	if (nbr > 15)
	{
		c = ft_puthexa(nbr / 16, str, c + 1);
		ft_putchar(str[nbr % 16], 0);
	}
	else
		c = ft_putchar(str[nbr], c);
	return (c);
}
