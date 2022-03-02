/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <grubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:07:36 by grubin            #+#    #+#             */
/*   Updated: 2022/03/01 09:13:31 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		pourcent_type;
	int		c;

	i = 0;
	c = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			pourcent_type = str[i + 1];
			c = ft_check(ap, pourcent_type, c);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			c++;
		}
		i++;
	}
	va_end(ap);
	return (c);
}

int	ft_check(va_list ap, int pourcent_type, int c)
{
	if (pourcent_type == 's')
		c = ft_putstr(va_arg(ap, char *), c);
	else if (pourcent_type == 'c')
		c = ft_putchar(va_arg(ap, int), c);
	else if (pourcent_type == '%')
		c = ft_putchar('%', c);
	else if (pourcent_type == 'd' || pourcent_type == 'i')
		c = ft_putnbr(va_arg(ap, int), c);
	else if (pourcent_type == 'u')
		c = ft_putunsigned(va_arg(ap, unsigned int), c);
	else if (pourcent_type == 'x')
		c = ft_puthexa(va_arg(ap, unsigned int), "0123456789abcdef", c);
	else if (pourcent_type == 'X')
		c = ft_puthexa(va_arg(ap, unsigned int), "0123456789ABCDEF", c);
	else if (pourcent_type == 'p')
		c = ft_putptr(va_arg(ap, void *), "0123456789abcdef", c);
	return (c);
}
/*
int main()
{
	//char str[] = "coucou";

	ft_printf("%x\n", -14);
	printf("%x", -14);
	return(0);
}
*/