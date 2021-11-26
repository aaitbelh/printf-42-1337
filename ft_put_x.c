/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:00:40 by aaitbelh          #+#    #+#             */
/*   Updated: 2021/11/24 20:03:19 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned int number, int *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (number >= 16)
		ft_put_x(number / 16, i);
	write(1, &hex[number % 16], 1);
	*i = *i + 1;
	return (*i);
}
