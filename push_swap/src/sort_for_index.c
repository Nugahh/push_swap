/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:41:49 by fwong             #+#    #+#             */
/*   Updated: 2022/08/04 15:41:49 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_int_tab(int *new_temp_stack, int len)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;

	while (i < len - 1)
	{
		j = i + 1;
		while (j < len - 1)
		{
			if (new_temp_stack[i] > new_temp_stack[j])
			{
				tmp = new_temp_stack[i];
				new_temp_stack[i] = new_temp_stack[j];
				new_temp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	ft_sorted_index(t_data *data)
{
	int	i;

	i = 0;
	data->temp_stack= malloc(sizeof(int *) * data->len_a);
	if (!data->temp_stack)
		return (0);
	while (i < data->len_a)
		data->temp_stack[i] = data->stack_a[i]; // all values from stack_a in new_temp_stack
	ft_sort_int_tab(data->temp_stack, data->len_a); // sort these values with ft_sort_tab
	i = 0;
	while (i < data->len_a)
	{
		data->index[i] = i;
		i++;
	}
	return (1);
}

int	ft_replace_stack_by_index(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->len_a)
	{
		j = 0;
		while (j < data->len_a)
		{
			if (data->temp_stack[j] == data->stack_a[i])
				data->index[i] = j;
			j++;
		}
		i++;
	}
	data->stack_a = data->index;
	return (1);
}

/* int main()
{
	int	len;
	int	*index = {0};
	len = 7;

	index = malloc(sizeof(int) * len);
	index[0] = 4;
	index[1] = 54;
	index[2] = 14;
	index[3] = 2;
	index[4] = 1;
	index[5] = 3;
	index[6] = 0;

	int	i;
	i = 0;
	while (i < len)
	{
		ft_sort_int_tab(index, len);
		printf("index sorted: %d\n", index[i]);
		i++;
	}

	printf("~ Stack A INITIALIZED ~\n\n");
	while (i < len)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	printf("\n");
	sort_5(&truc);
	printf("\n");
	printf("~ Stack A SORTED ~\n\n");
	i = 0;
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
} */