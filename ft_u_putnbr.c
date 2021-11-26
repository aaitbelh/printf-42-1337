/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:58:23 by aaitbelh          #+#    #+#             */
/*   Updated: 2021/11/24 18:51:22 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_nbr(unsigned int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		ft_print_nbr(nbr);
	}
	if (nbr < 10)
	{
		nbr = nbr + '0';
		ft_putchar(nbr);
	}
	else
	{
		ft_print_nbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

int	ft_u_putnbr(unsigned int nbr)
{
	unsigned int	i;
	unsigned int	n;

	n = nbr;
	i = 0;
	if (nbr < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	i++;
	ft_print_nbr(nbr);
	return (i);
}
