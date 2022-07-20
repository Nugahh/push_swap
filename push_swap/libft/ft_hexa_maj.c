/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_maj.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:52:00 by fwong             #+#    #+#             */
/*   Updated: 2022/07/14 15:53:32 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa_maj(unsigned int num)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_putnbr_hexa_maj(num / 16);
		write(1, &base[num % 16], 1);
	}
	else
		write(1, &base[num], 1);
}

int	ft_hexa_maj(va_list args)
{
	unsigned int	base;

	base = (unsigned int)va_arg(args, unsigned int);
	ft_putnbr_hexa_maj(base);
	return (ft_hexalen(base));
}
