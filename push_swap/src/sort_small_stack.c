/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:04:31 by fwong             #+#    #+#             */
/*   Updated: 2022/08/03 02:15:59 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	sort_4(t_data *data)
{
	rotate_min(data, ft_is_min(data));
	push_b(data);
	sort_3(data);
	push_a(data);
}

void	sort_5(t_data *data)
{
	rotate_min(data, ft_is_min(data));
	push_b(data);
	sort_4(data);
	push_a(data);
}

int	ft_sort_small_stack(t_data *data)
{
	if (data->len_a == 2)
		sort_2(data);
	else if (data->len_a == 3)
		sort_3(data);
	else if (data->len_a == 4)
		sort_4(data);
	else if (data->len_b == 5)
		sort_5(data);
	return (1);
}

/* int main()
{
	t_data truc;
	int	i = 0;
	
	truc.len_a = 5;
	truc.stack_a = malloc(sizeof(int) * truc.len_a);
	
	truc.stack_a[0] = 5;
	truc.stack_a[1] = 4;
	truc.stack_a[2] = 3;
	truc.stack_a[3] = 2;
	truc.stack_a[4] = 1;
	
	truc.len_b = 5;
	truc.stack_b = malloc(sizeof(int) * truc.len_b);

	printf("~ Stack A INITIALIZED ~\n\n");
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
	printf("\n");
	sort_5(&truc);
	printf("\n");
	printf("~ Stack A SORTED ~\n\n");
	i = 0;
	while (i < truc.len_a)
	{
		printf("Stack A: %d\n", truc.stack_a[i]);
		i++;
	}
}
 */
