/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:57:43 by fwong             #+#    #+#             */
/*   Updated: 2022/03/31 19:57:43 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}
/* 
int main()
{
	char a[59] = "abcdef";
	char b[59] = "abcdef";

	ft_bzero(a, 1);
	bzero(b, 1);

	printf("%s\n%s\n", a, b);
} */