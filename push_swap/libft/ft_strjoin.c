/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:17:29 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 18:53:14 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const *s2)
{
	int		i;
	int		j;
	size_t	dlen;
	size_t	slen;
	char	*ptr;

	dlen = ft_strlen(s1);
	slen = ft_strlen(s2);
	ptr = malloc(sizeof(char) * (dlen + slen + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i++] = s2[j++];
	}
	ptr[i] = '\0';
	return (ptr);
}
/* 
int main()
{
	char a[10] = "toto";
	char b[10] = "tata";

	printf("%s", ft_strjoin(a,b));
} */