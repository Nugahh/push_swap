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
	if (!ft_init_stack(&data, argc, argv))
		return (0);
	sort_big_stack(&data);
	while (i < argc - 1)
	{
		printf("%d\n", data.stack_a[i]);
		i++;
	}
	return (0);
}
