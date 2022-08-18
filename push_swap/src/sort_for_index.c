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

#include "../includes/push_swap.h"

// sort a tab of integer by ascending order
void	ft_sort_int_tab(int *new_temp_stack, int len)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
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

// copy stack_a's values in temp_stack && use ft_sort_int_tab
int	ft_sorted_index(t_data *data)
{
	int	i;

	i = 0;
	data->temp_stack = malloc(sizeof(int) * data->len_a);
	if (!data->temp_stack)
		return (0);
	while (i < data->len_a)
	{
		data->temp_stack[i] = data->stack_a[i];
		i++;
	}
	ft_sort_int_tab(data->temp_stack, data->len_a);
	return (1);
}

// replace stack_a's values with index
int	ft_replace_stack_by_index(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	ft_sorted_index(data);
	data->index = malloc(sizeof(int) * data->len_a);
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
	i = 0;
	while (i < data->len_a)
	{
		data->stack_a[i] = data->index[i];
		i++;
	}
	return (free(data->temp_stack), free(data->index), 1);
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
	truc.stack_b = malloc(sizeof(int) * truc.len_a);

	printf("~ Stack A INITIALIZED ~\n\n");
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	printf("\n");
	ft_replace_stack_by_index(&truc);
	printf("\n");
}
 */