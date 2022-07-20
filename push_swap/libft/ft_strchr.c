/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 10:59:13 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 17:56:08 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			return ((char *)(s));
		}
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
/* 
int main()
{
	char a[50] = "bonjour";	

	printf("%s", ft_strchr(a, 'j'));
} */