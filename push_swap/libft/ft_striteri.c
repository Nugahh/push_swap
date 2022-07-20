/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:16:38 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 17:23:03 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/* 
void	f_iter(unsigned int i, char *c)
{
	while (c[i])
	{
		c[i] += 1;
		i++;
	}
}

#include <stdio.h>

int main()
{
    char str1[] = "abc";
    ft_striteri(str1, *f_iter);
    printf("%s\n", str1);
} */