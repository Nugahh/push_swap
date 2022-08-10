/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:38:56 by fwong             #+#    #+#             */
/*   Updated: 2022/08/02 17:38:56 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// return the smallest value
int	ft_is_min(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = data->stack_a[0];
	while (i < data->len_a)
	{
		if (data->stack_a[i] < j)
			j = data->stack_a[i];
		i++;
	}
	return (j);
}

// rotate the smallest value to the top of the stack
void	rotate_min(t_data *data, int min)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->len_a)
	{
		if (data->stack_a[i] == min)
		{
			j = i;
			if (j > 2)
			{
				while (data->stack_a[0] != min)
					reverse_rotate_ra(data->stack_a, data->len_a);
			}
			else
			{
				while (data->stack_a[0] != min)
					rotate_ra(data->stack_a, data->len_a);
			}
		}
		i++;
	}
}
