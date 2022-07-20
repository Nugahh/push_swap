/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:26:13 by fwong             #+#    #+#             */
/*   Updated: 2022/07/14 15:53:41 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_intlen(long long k)
{
	int	i;

	i = 0;
	if (k == 0)
		return (1);
	if (k < 0)
	{
		i++;
		k *= -1;
	}
	while (k > 0)
	{
		k /= 10;
		i++;
	}
	return (i);
}

int	ft_integer(va_list args)
{
	int	num;

	num = (long long)va_arg(args, int);
	ft_putnbr_fd(num, 1);
	return (ft_intlen(num));
}
