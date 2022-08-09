/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:53:03 by fwong             #+#    #+#             */
/*   Updated: 2022/07/14 17:53:04 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc <= 1)
		return (0);
	if (!ft_init_stack(&data, argc, argv))
		return (0);
	ft_sort(&data);
	printf("Caca\n");
	int i = 0;
	while (i < data.len_a)
	{
		printf("stack_a[%d]: %d\n", i, data.stack_a[i]);
		i++;
	}
	return (free(data.stack_a), free(data.stack_b), 0);
}
