/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:01:07 by fwong             #+#    #+#             */
/*   Updated: 2022/07/17 17:28:53 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(int *sa, int *sb, int size)
{
	int	i;

	i = 0;
	if (sb == 0)
		return;
	
	ft_swap(&sa[0], &sb[0]);
}

int main()
{
	int stackA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int stackB[10] = {4, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	i;

	i = 0;
	push_a(stackA, stackB, 10);
	while (i < 10)
	{
	printf("%d\n", stackA[i]);
	i++;
	}
}