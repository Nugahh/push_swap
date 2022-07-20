/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:10:30 by fwong             #+#    #+#             */
/*   Updated: 2022/05/25 19:00:26 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_index(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*dest;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_index(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_index(s1[j - 1], set))
		j--;
	dest = malloc(sizeof(char) * (j - i + 1));
	if (!dest)
		return (NULL);
	k = 0;
	while (i < j)
	{
		dest[k++] = s1[i++];
	}
	dest[k] = '\0';
	return (dest);
}
/* 
int main()
{
	char *a = "ici la merde Bonjouri c'est moi ici la merde";
	char *b = "ici la merde";

	printf("%s", ft_strtrim(a, b));
} */
