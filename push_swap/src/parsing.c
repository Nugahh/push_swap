/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:47:07 by fwong             #+#    #+#             */
/*   Updated: 2022/08/22 19:04:04 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <limits.h>

// print "Error"
int	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (0);
}

// check if there is a duplicate in our string
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
				return (free(stack), 0);
			j++;
		}
		i++;
	}
	return (free(stack), 1);
}

// check every conditions needed for the parsing
int	ft_check_parsing(char **argv, int len)
{
	int	i;
	int	j;

	i = 1;
	while (i <= len)
	{
		j = 0;
		if (argv[i][0] == '-' || argv[i][0] == '+')
				j++;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
				return (ft_error(), 0);
		}
		if (ft_atoi(argv[i]) >= 2147483648)
			return (ft_error(), 0);
		i++;
	}
	if (!ft_check_duplicate(argv, len))
		return (ft_error(), 0);
	return (1);
}

// initialize both of our stacks, stack_a and stack_b & fill stack_a
int	ft_init_stack(t_data *data, int argc, char **argv)
{
	int	i;

	i = 0;
	data->len_a = argc - 1;
	data->len_b = 0;
	if (!ft_check_parsing(argv, data->len_a))
		return (0);
	data->stack_a = malloc(sizeof(int) * data->len_a);
	if (!data->stack_a)
		return (0);
	data->stack_b = malloc(sizeof(int) * data->len_a);
	if (!data->stack_b)
		return (0);
	while (i < data->len_a)
	{
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (1);
}

/* int main(int argc, char **argv)
{
	t_data data;
	int i = 0;
	if (argc == 1)
		return (0);
	data.len_a = argc - 1;
	data.stack_a = malloc(sizeof(int) * data.len_a);
	// printf("Should return 1: %d\n", ft_init_stack(&data, argc, argv));
	printf("Should return 1: %d\n", ft_check_parsing(argv, data.len_a));
	while (i < argc - 1)
	{
		printf("stack_a[%d] = %d\n", i, data.stack_a[i]);
		i++;
	}
} */