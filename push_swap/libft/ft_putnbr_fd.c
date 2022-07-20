/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:10:52 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 17:22:53 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	a;
	long	b;

	a = n;
	if (a < 0)
	{
		write(fd, "-", 1);
		a *= -1;
	}
	if (a >= 0 && a <= 9)
	{
		b = '0' + a;
		write(fd, &b, 1);
	}
	else
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
}
/* 
int main()
{
	ft_putnbr_fd(-546, 1);
} */