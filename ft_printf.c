/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:38:56 by aaitbelh          #+#    #+#             */
/*   Updated: 2021/11/25 09:50:27 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list ptr, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (c == 'u')
		return (ft_u_putnbr(va_arg(ptr, unsigned int)));
	else if (c == 'p')
	{
		ft_putstr("0x");
		ft_putaddress(va_arg(ptr, unsigned long int), &i);
		return (i + 2);
	}
	else if (c == 'x')
		return (ft_put_x(va_arg(ptr, unsigned int), &i));
	else if (c == 'X')
		return (ft_up_put_x(va_arg(ptr, unsigned int), &i));
	else
		return (ft_putchar(c));
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		count;

	count = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (!*str)
				return (count);
			count += ft_check(ptr, *str);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(ptr);
	va_start(ptr,str);
	return (count);
}
