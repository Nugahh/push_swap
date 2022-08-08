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
	int		i;

	i = 0;
	if (argc <= 1)
		return (0);
	printf("CACAOUI\n");

	if (!ft_init_stack(&data, argc, argv))
		return (0);
	printf("CACAOUI\n");
	ft_sort(&data);
	printf("CACANON\n");
	// ft_sorted_index(&data);
	// ft_replace_stack_by_index(&data);
	while (i < argc - 1)
	{
		printf("%d\n", data.stack_a[i]);
		i++;
	}
	return (0);
}
