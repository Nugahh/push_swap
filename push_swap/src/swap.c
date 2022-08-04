/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:01:15 by fwong             #+#    #+#             */
/*   Updated: 2022/07/24 22:12:44 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp_a;

	tmp_a = *a;
	*a = *b;
	*b = tmp_a;
}

void	swap_sa(int *stack, int len)
{
	if 	(len <= 1)
		return;
	ft_swap(&stack[0], &stack[1]);
	ft_putstr_fd("sa\n", 1);
}

void	swap_sb(int *stack, int len)
{
	if 	(len <= 1)
		return;
	ft_swap(&stack[0], &stack[1]);
	ft_putstr_fd("sb\n", 1);
}

void	swap_ss(int* sa, int* sb, int len)
{
	if 	(len <= 1)
		return;
	ft_swap(&sa[0], &sa[1]);
	ft_swap(&sb[0], &sb[1]);
	ft_putstr_fd("ss\n", 1);
}
