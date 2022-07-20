/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:29:20 by fwong             #+#    #+#             */
/*   Updated: 2022/05/27 01:22:28 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_intlen(int c)
{
	int			i;
	long long	nb;

	nb = c;
	i = 0;
	if (nb <= 0)
	{
		i = 1;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long long	a;
	char		*str;

	a = n;
	str = malloc(sizeof(char) * (ft_intlen(a) + 1));
	if (!str)
		return (NULL);
	i = ft_intlen(a);
	str[i] = '\0';
	i--;
	if (a == 0)
		str[0] = '0';
	if (a < 0)
	{
		a *= -1;
		str[0] = '-';
	}
	while (a > 0)
	{
			str[i--] = '0' + (a % 10);
			a /= 10;
	}
	return (str);
}
/* 
int main ()
{
	printf("%s", ft_itoa(-2147483648));
} */