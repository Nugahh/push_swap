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

#include "../push_swap.h"

int ft_get_max_bits(t_data *data)
{
	int max_bits;
	int size;

	max_bits = 1;
	size = data->len_a;
	while ((size /= 2) != 0)
		max_bits++;
	return (max_bits);
}

void sort_big_stack(t_data *data)
{
	int i;
	int j;
	int	size;

	i = 0;
	size = data->len_a;
	ft_replace_stack_by_index(data);
	while (i < ft_get_max_bits(data))
	{
		j = 0;
		while (j < size)
		{
			if ((data->stack_a[0] >> i & 1) == 1)
				rotate_ra(data->stack_a, data->len_a);
			else
				push_b(data);
			j++;
		}
		while (data->len_b != 0)
			push_a(data);
		i++;
	}
}

/* int main()
{
	t_data truc;
	int i = 0;
	truc.len_a = 6;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	truc.stack_a[0] = 4;
	truc.stack_a[1] = 5;
	truc.stack_a[2] = 3;
	truc.stack_a[3] = 2;
	truc.stack_a[4] = 6;
	truc.stack_a[5] = 7;

	truc.len_b = 0;
	truc.stack_b = malloc(sizeof(int) * truc.len_a);

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