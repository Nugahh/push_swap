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

int	ft_get_max_bits(t_data *data)
{
	int	max_bits;
	int	size;

	max_bits = 1;
	size = data->len_a;
	while (size != 0)
	{
		size /= 2;
		max_bits++;
	}
	return (max_bits);
}

void	sort_big_stack(t_data *data)
{
	int	i;
	int	j;
	int	max_bits;
	int	size;

	i = 0;
	size = data->len_a;
	max_bits = ft_get_max_bits(data);
	// ft_replace_stack_by_index(data);
	while (i < max_bits)
	{
	printf("i: %d\n", i);
	printf("stack a[0] = %d\n", data->stack_a[0]);
	printf("stack a[1] = %d\n", data->stack_a[1]);
	printf("stack a[2] = %d\n\n", data->stack_a[2]);
		j = 0;
		while (j < size)
		{
			/* printf("Len a = %d\n", data->len_a);
			printf("Len b = %d\n", data->len_b);
			printf("stack_a[0] = %d\n", data->stack_a[0]);
			printf("bit le moins fort =  %d = %d\n", i, data->stack_a[0] >> i);  */
			if (((data->stack_a[0] >> i) & 1) == 1)
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
	truc.len_a = 3;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	truc.stack_a[0] = 2;
	truc.stack_a[1] = 1;
	truc.stack_a[2] = 0;

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