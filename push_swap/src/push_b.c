/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:35:39 by fwong             #+#    #+#             */
/*   Updated: 2022/08/02 17:35:39 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// add the top first element of stack_a in top first element of stack_b
void	ft_add_top_stack_b(t_data *data)
{
	int	*new_stack_b;
	int	i;

	i = 0;
	new_stack_b = malloc(sizeof(int) * (data->len_b + 1));
	if (!new_stack_b)
		return ;
	new_stack_b[0] = data->stack_a[0];
	while (i < data->len_b)
	{
		new_stack_b[i + 1] = data->stack_b[i];
		i++;
	}
	free(data->stack_b);
	data->stack_b = new_stack_b;
	data->len_b++;
}

// delete top first element of stack_a
void	ft_delete_top_stack_a(t_data *data)
{
	int		*new_stack_a;
	int		i;

	i = 0;
	new_stack_a = malloc(sizeof(int) * (data->len_a - 1));
	if (!new_stack_a)
		return ;
	while (i < (data->len_a - 1))
	{
		new_stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	free(data->stack_a);
	data->stack_a = new_stack_a;
	data->len_a--;
}

// push the top first element of stack_a to stack_b
void	push_b(t_data *data)
{
	ft_add_top_stack_b(data);
	ft_delete_top_stack_a(data);
	ft_putstr_fd("pb\n", 1);
}
