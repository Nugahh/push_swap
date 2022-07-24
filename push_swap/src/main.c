/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:09:03 by fwong             #+#    #+#             */
/*   Updated: 2022/07/24 22:35:01 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main()
{
	int stackA[6] = {2, 1, 3, 6, 5, 8};
	int stackB[6] = {};
	int	i;

	i = 0;
	swap_sa(stackA, 6);
	while (i <= 6)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= 6)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
	printf("\n");
	printf("\n");
	
	push_b(stackA, stackB, 6);
	push_b(stackA, stackB, 6);
	push_b(stackA, stackB, 6);
	i = 0;
	while (i <= 6)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= 6)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
	printf("\n");
	printf("\n");

	rotate_ra(stackA, 3);
	rotate_rb(stackB, 3);
	i = 0;
	while (i <= 6)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= 6)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
	printf("\n");
	printf("\n");

	reverse_rotate_ra(stackA, 3);
	reverse_rotate_rb(stackB, 3);
	i = 0;
	while (i <= 6)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= 6)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
	printf("\n");
	printf("\n");

	swap_sa(stackA, 3);
	i = 0;
	while (i <= 6)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= 6)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
	printf("\n");
	printf("\n");

	push_a(stackA, stackB, 3);
	push_a(stackA, stackB, 4);
	push_a(stackA, stackB, 5);
	i = 0;
	while (i <= 6)
	{
		printf("stack A[%d]: %d\n", i, stackA[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= 6)
	{
		printf("stack B[%d]: %d\n", i, stackB[i]);
		i++;
	}
}
