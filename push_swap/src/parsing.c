/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:47:07 by fwong             #+#    #+#             */
/*   Updated: 2022/08/01 17:46:01 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_fill_stack(int *stack, int len, char **argv)

int	ft_check_int_max(int len, char **argv)
{
	long	*stack;
	int	i;

	i = 0;
	stack = malloc(sizeof(long) * len);
	if (!stack)
		return (0);
	while (i < len)
	{
		stack = ft_atoi(argv[i + 1]);
		if (stack[i] < -2147483648 || stack[i] > 2147483647)
			return (free(stack), 0);
		i++;
	}
	return (1);
}
int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_check_duplicate(int *stack, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (stack[i] == stack[j])
				return 0;
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_parsing(char **argv, int len)
{
	int	i;
	int	j;

	i = 1;
	while (i <= len)
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && argv[i][j] == '-')
				j++;
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	if (!ft_check_int_max(len, argv))
		return (0);
	return (1);
}