/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:43:09 by fwong             #+#    #+#             */
/*   Updated: 2022/06/10 15:34:47 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_check(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_fonction(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(args));
	else if (c == 's')
		return (ft_putstr(args));
	else if (c == 'p')
		return (ft_pointer(args));
	else if (c == 'd' || c == 'i')
		return (ft_integer(args));
	else if (c == 'u')
		return (ft_unsignedint(args));
	else if (c == 'x')
		return (ft_hexa_min(args));
	else if (c == 'X')
		return (ft_hexa_maj(args));
	else if (c == '%')
		return (ft_percent());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && ft_check(str[i + 1]) == 1)
		{
			len += ft_fonction(str[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
