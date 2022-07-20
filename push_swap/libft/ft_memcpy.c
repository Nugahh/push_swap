/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:53:03 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 17:22:42 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/* 
int main()
{
	char a[50] = "Je pue la merdee";
	char b[50] = "Je pue la merde et toi";

	// ft_memcpy(a, b, 6);
	memmove(a, b, 20);
	// memcpy(a, b, 20);
	printf("%s\n", a);
} */
