/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:01:07 by fwong             #+#    #+#             */
/*   Updated: 2022/07/20 15:24:32 by fwong            ###   ########.fr       */
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
	i = size;
	while (i >= 0)
	{
		ft_swap(&sb[i], &sb[i - 1]);
		i--;
	}
}

int main()
{
	int stackA[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int stackB[11] = {4, 2, 3, 4, 5};
	int	i;

	i = 0;
	push_a(stackA, stackB, 10);
	while (i <= 10)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= 10)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
}
