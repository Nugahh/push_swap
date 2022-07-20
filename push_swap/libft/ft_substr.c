/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:04:01 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 18:49:53 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dlen;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	if (start > i)
		return (ft_calloc(1, sizeof(char)));
	if (start < i)
		j = i - start;
	if (j > len)
		j = len;
	dlen = malloc(sizeof(char) * (j + 1));
	if (!dlen)
		return (NULL);
	ft_strlcpy(dlen, s + start, j + 1);
	return (dlen);
}
/* 
int main()
{
	char a[50] = "bonjour";

	printf("%s", ft_substr(a, 3, 3));
} */