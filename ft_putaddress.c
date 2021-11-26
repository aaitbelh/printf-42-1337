/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:32:42 by aaitbelh          #+#    #+#             */
/*   Updated: 2021/11/25 09:35:36 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h> 

int	ft_putaddress(unsigned long int number, int *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (number >= 16)
		ft_putaddress(number / 16, i);
	write(1, &hex[number % 16], 1);
	*i = *i + 1;
	return (*i);
}
