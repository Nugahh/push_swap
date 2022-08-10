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

#include "../includes/push_swap.h"

// shift down all elements of stack a by 1
// the last element becomes the first one
void	reverse_rotate_ra(int *stack, int size)
{
	while (size - 1 > 0)
	{
		ft_swap(&stack[size - 1], &stack[size - 2]);
		size--;
	}
	ft_putstr_fd("rra\n", 1);
}

// shift down all elements of stack b by 1
// the last element becomes the first one
void	reverse_rotate_rb(int *stack, int size)
{
	while (size - 1 > 0)
	{
		ft_swap(&stack[size - 1], &stack[size - 2]);
		size--;
	}
	ft_putstr_fd("rrb\n", 1);
}

// do rra & rrb at the same time
void	reverse_rotate_rrr(int *ra, int *rb, int size)
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
	ft_putstr_fd("rrr\n", 1);
}

/* int main()
{
	int stack[10] = {2, 3 ,1};
	int	i;

	i = 0;
	reverse_rotate_ra(stack, 3);
	while (i < 10)
	{
	printf("%d\n", stack[i]);
	i++;
	}
} */