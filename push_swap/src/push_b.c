/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:35:39 by fwong             #+#    #+#             */
/*   Updated: 2022/08/02 17:35:39 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// add the top first element of stack_a in top first element of stack_b
/* ====================================== */
/*     stack_a[0]     temp stack_b[0]     */		
/*      *=====*         *=====*           */
/*      *  3  -----------> 3  *           */
/*      *  2  *         *     *           */
/*      *  4  *         *     *           */
/*      *=====*         *=====*           */
/*                                        */
/*     stack_b[i]     temp stack_b[i + 1] */
/*                      *=====*           */
/*      *=====*	     	*  3  *           */
/*    i *  7  -----------> 7  * i + 1     */
/*      *  6               6  *           */
/*      *  5               5  *           */
/*      *=====*         *=====*           */	
/* ====================================== */
int	ft_add_top_stack_b(t_data *data)
{
	int	*new_stack_b;
	int	i;

	i = 0;
	new_stack_b = malloc(sizeof(int) * (data->len_b + 1));
	if (!new_stack_b)
		return (0);
	new_stack_b[0] = data->stack_a[0];
	while (i < data->len_b)
	{
		new_stack_b[i + 1] = data->stack_b[i];
		i++;
	}
	free(data->stack_b);
	data->stack_b = new_stack_b;
	data->len_b++;
	return (1);
}

// delete top first element of stack_a
/* ========================================= */
/*      stack_a[i + 1]   temp stack_a[0]     */		
/*       *=====*                             */	
/*       *  3  *           *=====*           */
/* i + 1 *  2  -------------> 2  * i         */
/*       *  4  *           *  4  *           */
/*       *=====*           *=====*           */
/*                                           */
/*    temp stack_a[]       stack_a[]         */
/*       *=====*           *=====*           */
/*       *  2  -------------> 2  *           */
/*       *  4                 4  *           */
/*       *=====*           *=====*           */	
/* ========================================= */
int	ft_delete_top_stack_a(t_data *data)
{
	int		*new_stack_a;
	int		i;

	i = 0;
	new_stack_a = malloc(sizeof(int) * (data->len_a - 1));
	if (!new_stack_a)
		return (0);
	while (i < (data->len_a - 1))
	{
		new_stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	free(data->stack_a);
	data->stack_a = new_stack_a;
	data->len_a--;
	return (1);
}

// push the top first element of stack_a to stack_b
int	push_b(t_data *data)
{
	if (!ft_add_top_stack_b(data))
		return (0);
	if (!ft_delete_top_stack_a(data))
		return (0);
	ft_putstr_fd("pb\n", 1);
	return (1);
}

/* int	main()
{
	t_data truc;
	int	i;

	i = 0;
	truc.len_a = 8;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	truc.stack_a[0] = 2;
	truc.stack_a[1] = 1;
	truc.stack_a[2] = 3;
	truc.stack_a[3] = 4;
	truc.stack_a[4] = 6;
	truc.stack_a[5] = 5;

	truc.len_b = 0;
	truc.stack_b = malloc(sizeof(int) * truc.len_a);

	printf("~ Stack A INITIALIZED ~\n\n");
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("~ Stack B INITIALIZED ~\n\n");
	while (i < truc.len_b)
	{
		printf("Stack B: %d\n", truc.stack_b[i]);
		i++;
	}
	printf("\n");
	push_b(&truc);
	push_b(&truc);
	push_b(&truc);
	push_b(&truc);
	push_a(&truc);
	push_a(&truc);
	push_a(&truc);
	push_a(&truc);
	printf("\n");
	printf("~ Stack A SORTED ~\n\n");
	i = 0;
	while (i < truc.len_a)
	{
		i++;`	
	}
	printf("\n");
	i = 0;
	printf("~ Stack B SORTED ~\n\n");
	while (i < truc.len_b)
	{
		printf("Stack B: %d\n", truc.stack_b[i]);
		i++;
	}
} */