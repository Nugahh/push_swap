/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:16:05 by fwong             #+#    #+#             */
/*   Updated: 2022/07/14 15:54:27 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_len(unsigned long long nb)
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
	return (i + 2);
}

void	ft_pointer_hexa(unsigned long long ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr >= 16)
	{
		ft_pointer_hexa(ptr / 16);
		write(1, &base[ptr % 16], 1);
	}
	else
		write(1, &base[ptr], 1);
}

int	ft_pointer(va_list args)
{
	unsigned long long	base;

	base = (unsigned long long)va_arg(args, void *);
	if (!base)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		ft_pointer_hexa(base);
		return (ft_pointer_len(base));
	}
}
