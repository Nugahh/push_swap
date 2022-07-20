/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:48:00 by fwong             #+#    #+#             */
/*   Updated: 2022/07/14 15:53:36 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

void	ft_putnbr_hexa_min(unsigned int num)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
	{
		ft_putnbr_hexa_min(num / 16);
		write(1, &base[num % 16], 1);
	}
	else
		write(1, &base[num], 1);
}

int	ft_hexa_min(va_list args)
{
	unsigned int	base;

	base = (unsigned long long)va_arg(args, unsigned int);
	ft_putnbr_hexa_min(base);
	return (ft_hexalen(base));
}
