/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:58:37 by aaitbelh          #+#    #+#             */
/*   Updated: 2021/11/25 09:34:38 by aaitbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putaddress(unsigned long int number, int *i);
int	ft_u_putnbr(unsigned int nbr);
int	ft_put_x(unsigned int number, int *i);
int	ft_up_put_x(unsigned int number, int *i);

#endif