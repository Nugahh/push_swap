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
	int temp_len;

	max_bits = 1;
	temp_len = data->len_a;
	while ((temp_len /= 2) != 0)
		max_bits++;
	return (max_bits);
}

void sort_big_stack(t_data *data)
{
	int i;
	int j;

	i = -1;
	while (++i < ft_get_max_bits(data))
	{
		j = 0;
		printf("~ i is = %d ~\n\n", i);
		while (j < data->len_a)
		{
			printf("Stack_a[0]: %d\n",data->stack_a[0]);
			printf("%d >> %d = %d\n", data->stack_a[0], i, (data->stack_a[0] >> i));
			printf("(%d >> 0) & %d = %d\n", data->stack_a[0] >> i, 1, (data->stack_a[j] >> i & 1));
			if ((data->stack_a[0] >> i) & 1)
			{
				rotate_ra(data->stack_a, data->len_a);
			}
			else
				push_b(data);
			++j;
		}
		while (data->len_b)
			push_a(data);
		printf("\n\n");
	}
}

int main()
{
	t_data truc;
	int i = 0;

	truc.len_a = 6;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);

	truc.stack_a[0] = 4;
	truc.stack_a[1] = 5;
	truc.stack_a[2] = 3;
	truc.stack_a[3] = 2;
	truc.stack_a[4] = 1;
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
}