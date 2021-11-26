/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up_put_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:12:01 by aaitbelh          #+#    #+#             */
/*   Updated: 2021/11/24 20:48:42 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_up_put_x(unsigned int number, int *i)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (number >= 16)
		ft_up_put_x(number / 16, i);
	write (1, &hex[number % 16], 1);
	*i = *i + 1;
	return (*i);
}
