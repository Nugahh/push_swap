/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:56:11 by fwong             #+#    #+#             */
/*   Updated: 2022/08/03 17:56:11 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_max_bits(t_data *data)
{
	int	size;
	int	max_bits;

	size = data->len_a;
	max_bits = 0;
	while (size >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

int	sort_big_stack(t_data *data)
{
	int	i;
	int	j;
	int	max_bits;
	int	size;

	i = -1;
	size = data->len_a;
	ft_replace_stack_by_index(data);
	max_bits = ft_get_max_bits(data);
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			if (((data->stack_a[0] >> i) & (1 == 1)))
				rotate_ra(data->stack_a, data->len_a);
			else
				if (!push_b(data))
					return (0);
		}
		while (data->len_b > 0)
			if (!push_a(data))
				return (0);
	}
	return (1);
}

/* int main()
{
	t_data truc;
	int i = 0;
	truc.len_a = 11;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	truc.stack_a[0] = 20;
	truc.stack_a[1] = 10;
	truc.stack_a[2] = 30;
	truc.stack_a[3] = 40;
	truc.stack_a[4] = 60;
	truc.stack_a[5] = 50;
	truc.stack_a[6] = 70;
	truc.stack_a[7] = 80;
	truc.stack_a[8] = 90;
	truc.stack_a[9] = 100;
	truc.stack_a[10] = 0;

	truc.len_b = 0;
	truc.stack_b = malloc(sizeof(int) * truc.len_b);

	printf("~ Stack A INITIALIZED ~\n\n");
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	printf("\n");
	sort_big_stack(&truc);
	printf("\n");
	printf("~ Stack A SORTED ~\n\n");
	i = 0;

	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
} */