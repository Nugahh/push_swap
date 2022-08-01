/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:04:31 by fwong             #+#    #+#             */
/*   Updated: 2022/08/01 22:03:42 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_min(t_data *data)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	min = 0;
	while (i < data->len_a)
	{	
		j = 0;
		while (j < data->len_a)
		{
			if (data->stack_a[i] < data->stack_a[j])
				min += 1;
				// printf("%d", min);
				j++;
		}
		// printf("\n");
		if (min != data->len_a - 1)
			min = 0;
		else
			return (data->stack_a[i]);
		i++;
	}
	return (0);
}

void	sort_2(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		swap_sa(data->stack_a, data->len_a);
}
void	sort_3(t_data *data)
{
	 if (data->stack_a[0] > data->stack_a[1]
        && data->stack_a[0] > data->stack_a[2])
        rotate_ra(data->stack_a, data->len_a);
    else if (data->stack_a[1] > data->stack_a[0]
        && data->stack_a[1] > data->stack_a[2])
        reverse_rotate_ra(data->stack_a, data->len_a);
    if (data->stack_a[0] > data->stack_a[1])
        swap_sa(data->stack_a, data->len_a);
}

int main()
{
	struct s_data truc;
	int	i = 0;
	
	truc.len_a = 5;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	
	truc.stack_a[0] = 4;
	truc.stack_a[1] = 2;
	truc.stack_a[2] = 3;
	truc.stack_a[3] = 5;
	truc.stack_a[4] = 1;
	
	truc.len_b = 5;
	truc.stack_b = malloc(sizeof(int) * truc.len_b);
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	printf("\n");
	printf("\n");
	printf("Min is: %d\n", ft_find_min(&truc));
	push_b(&truc);
	rotate_ra(truc.stack_a, 5);
	rotate_ra(truc.stack_a, 5);
	rotate_ra(truc.stack_a, 5);
	rotate_ra(truc.stack_a, 5);
	printf("\n");

	i = 0;
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	ft_delete_top_stack_a(&truc);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Min is: %d\n", ft_find_min(&truc));
}

