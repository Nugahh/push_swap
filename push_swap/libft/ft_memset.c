/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:27:31 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 17:22:46 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/* 
int main()
{
	char a[10] = "Bonjour";
	char b[10] = "Bonjour";

	memset(a, 'c', 3);
	ft_memset(b, 'c', 3);
	printf("%s\n", a);
	printf("%s\n", b);
} */