/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:01:07 by fwong             #+#    #+#             */
/*   Updated: 2022/08/01 21:52:08 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_data *data)
{
	int	*new_stack_a;
	int	i;

	i = 0;
	new_stack_a = malloc(sizeof(int) * (data->len_a + 1));
	if (!new_stack_a)
		return;
	new_stack_a[0] = data->stack_b[0];
	while (i < data->len_a)
	{
		new_stack_a[i + 1] =  data->stack_a[i];
		i++;
	}
	free(data->stack_a);
	data->stack_a = new_stack_a;
	data->len_a++;
	// data->len_b--;
}

void	push_b(t_data *data)
{
	int	*new_stack_b;
	int	i;
	
	i = 0;
	new_stack_b = malloc(sizeof(int) * (data->len_b + 1));
	if (!new_stack_b)
		return;
	new_stack_b[0] = data->stack_a[0];
	while (i < data->len_b)
	{
		new_stack_b[i + 1] =  data->stack_b[i];
		i++;
	}
	free(data->stack_b);
	data->stack_b = new_stack_b;
	data->len_b++;
	// ft_delete_top_stack_a(data);
}

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

/* void	push_b(int *sa, int *sb, int size)
{
	int	i;

	i = size;
	if (sa == 0)
		return;
	while (i > 0)
	{
		ft_swap(&sb[i], &sb[i - 1]);
		i--;
	}
	sb[0] = sa[0];
	i = 0;
	while (i <= size)
	{
		ft_swap(&sa[i], &sa[i + 1]);
		i++;
	}
} */

/* int main()
{
	struct s_data truc;
	int	i = 0;
	
	truc.len_a = 5;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	
	truc.stack_a[0] = 1;
	truc.stack_a[1] = 2;
	truc.stack_a[2] = 3;
	truc.stack_a[3] = 4;
	truc.stack_a[4] = 5;
	
	truc.len_b = 2;
	truc.stack_b = malloc(sizeof(int) * truc.len_b);
	truc.stack_b[0] = 7;
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	push_a(&truc);
	i = 0;
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	free(truc.stack_a);
	free(truc.stack_b);
} */
