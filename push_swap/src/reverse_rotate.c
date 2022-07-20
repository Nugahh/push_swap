/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:41:24 by fwong             #+#    #+#             */
/*   Updated: 2022/07/17 17:17:09 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void reverse_rotate_ra(int *stack, int size)
{
	while (size - 1 > 0)
	{
		ft_swap(&stack[size - 1], &stack[size - 2]);
		size--;
	}
	ft_putstr_fd("rra", 1);
}

void reverse_rotate_rb(int *stack, int size)
{
	while (size - 1 > 0)
	{
		ft_swap(&stack[size - 1], &stack[size - 2]);
		size--;
	}
	ft_putstr_fd("rrb", 1);
}

void reverse_rotate_rrr(int *ra, int *rb, int size)
{
	int	i;

	i = size - 1;
	while (size - 1 > 0)
	{
		ft_swap(&ra[i], &ra[i - 1]);
		i--;
	}
	i = size - 1;
	while (size - 1 > 0)
	{
		ft_swap(&rb[i], &rb[i - 1]);
		i--;
	}
	ft_putstr_fd("rrr", 1);
}
/* 
int main()
{
	int stack[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	i;

	i = 0;
	reverse_rotate_ra(stack, 10);
	while (i < 10)
	{
	printf("%d\n", stack[i]);
	i++;
	}
} */