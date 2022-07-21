/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:01:07 by fwong             #+#    #+#             */
/*   Updated: 2022/07/21 15:51:43 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(int *sa, int *sb, int size)
{
	int	i;

	i = size;
	if (sb == 0)
		return;
	while (i > 0)
	{
		ft_swap(&sa[i], &sa[i - 1]);
		i--;
	}
	sa[0] = sb[0];
	i = 0;
	while (i <= size)
	{
		ft_swap(&sb[i], &sb[i + 1]);
		i++;
	}
}

void	push_b(int *sa, int *sb, int size)
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
}

int main()
{
	int stackA[6] = {2, 1, 3, 6, 5, 8};
	int stackB[6] = {};
	int	i;

	i = 0;
	push_b(stackA, stackB, 6);
	push_b(stackA, stackB, 6);
	push_b(stackA, stackB, 6);
	while (i < 6)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
}
