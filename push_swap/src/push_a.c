/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:01:07 by fwong             #+#    #+#             */
/*   Updated: 2022/08/07 17:46:06 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// add the top first element of stack_b in first top element of stack_a
int	ft_add_top_stack_a(t_data *data)
{
	int	*new_stack_a;
	int	i;

	i = 0;
	new_stack_a = malloc(sizeof(int) * (data->len_a + 1));
	if (!new_stack_a)
		return (0);
	new_stack_a[0] = data->stack_b[0];
	while (i < data->len_a)
	{
		new_stack_a[i + 1] = data->stack_a[i];
		i++;
	}
	free(data->stack_a);
	data->stack_a = new_stack_a;
	data->len_a++;
	return (1);
}

// delete top first element of stack_b
int	ft_delete_top_stack_b(t_data *data)
{
	int		*new_stack_b;
	int		i;

	i = 0;
	new_stack_b = malloc(sizeof(int) * (data->len_b - 1));
	if (!new_stack_b)
		return (0);
	while (i < (data->len_b - 1))
	{
		new_stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	free(data->stack_b);
	data->stack_b = new_stack_b;
	data->len_b--;
	return (1);
}

// push the top first element of stack_b to stack_a
int	push_a(t_data *data)
{
	if (!ft_add_top_stack_a(data))
		return (0);
	if (!ft_delete_top_stack_b(data))
		return (0);
	ft_putstr_fd("pa\n", 1);
	return (1);
}

/* int main()
{
	struct s_data truc;
	int	i = 0;
	
	truc.len_b = 5;
	truc.stack_b = malloc(sizeof(int) * truc.len_b);
	
	truc.stack_b[0] = 1;
	truc.stack_b[1] = 2;
	truc.stack_b[2] = 3;
	truc.stack_b[3] = 4;
	truc.stack_b[4] = 5;
	
	truc.len_a = 5;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	push_a(&truc);
	i = 0;
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	printf("\n");
	printf("\n");
	i = 0;
	while (i < truc.len_b)
	{
		printf("Stack B: %d\n", truc.stack_b[i]);
		i++;
	}
} */
