/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:36:24 by fwong             #+#    #+#             */
/*   Updated: 2022/07/17 16:45:00 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_ra(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&stack[i], &stack[i + 1]);
		i++;
	}
	ft_putstr_fd("ra\n", 1);
}

void	rotate_rb(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&stack[i], &stack[i + 1]);
		i++;
	}
	ft_putstr_fd("rb\n", 1);
}

/* int main()
{
	int stack[11] = {1, 2, 3, 4, 5, 6, 7, 8, 19, 3432, 2939};
	int	i;

	i = 0;
	rotate_ra(stack, 11);
	while (i < 11)
	{
	printf("%d\n", stack[i]);
	i++;
	}
} */