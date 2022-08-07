/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:47:07 by fwong             #+#    #+#             */
/*   Updated: 2022/08/07 18:57:59 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_int_max(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strncmp(argv[i], ft_itoa(ft_atoi(argv[i])), 12) != 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_duplicate(char **argv, int len)
{
	int	*stack;
	int	i;
	int	j;

	i = -1;
	stack = malloc(sizeof(int) * len);
	if (!stack)
		return (0);
	while (++i < len)
		stack[i] = ft_atoi(argv[i + 1]);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (stack[i] == stack[j])
				return (0);
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
		/* 	if (argv[i][0] == '-')
				j++; */
			if ((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-')
				j++;
			else
				return (0);
		}
		i++;
	}
	if (!ft_check_int_max(argv))
		return (0);
	if (!ft_check_duplicate(argv, len))
		return (0);
	return (1);
}

int	ft_init_stack(t_data *data, int argc, char **argv)
{
	int	i;

	i = 0;
	data->len_a = argc - 1;
	if (!ft_parsing(argv, data->len_a))
		return (0);
	data->stack_a = malloc(sizeof(int) * data->len_a);
	if (!data->stack_a)
		return (0);
	data->stack_b = malloc(sizeof(int) * data->len_a);
	if (!data->stack_b)
		return (0);
	printf("CACA PARSING\n");
	while (i < data->len_a)
	{
		printf("CACA ATOI\n");
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	printf("CACA FIN\n");

	return (1);
}

/* 
int main(int argc, char **argv)
{
	t_data data;
	int i = 0;
	if (argc == 1)
		return (0);
	printf("Should return 1: %d\n", ft_init_stack(&data, argc, argv));
	while (i < argc - 1)
	{
		printf("stack_a[%d] = %d\n", i, data.stack_a[i]);
		i++;
	}
} */