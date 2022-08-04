/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:34:20 by fwong             #+#    #+#             */
/*   Updated: 2022/07/14 15:54:47 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignednbr(unsigned int n)
{
	unsigned long long int	nb;

	nb = n;
	if (nb > 9)
	{
		ft_putunsignednbr(nb / 10);
		ft_putunsignednbr(nb % 10);
	}
	else
		ft_putchar_fd(nb + 48, 1);
}

int	ft_unsignedintlen(unsigned int k)
{
	unsigned int	i;

	i = 0;
	while (k != 0)
	{
		k /= 10;
		i++;
	}
	return (i);
}

int	ft_unsignedint(va_list args)
{
	unsigned int	num;

	num = (unsigned int)va_arg(args, unsigned int);
	ft_putunsignednbr(num);
	return (ft_intlen(num));
}
