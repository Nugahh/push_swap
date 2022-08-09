/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:02:09 by fwong             #+#    #+#             */
/*   Updated: 2022/08/05 01:02:09 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sort(t_data *data)
{
	if (data->len_a <= 5)
	{
		sort_small_stack(data);
		printf("caca\n");
	}
	else
	{
		sort_big_stack(data);
		printf("caca\n");
	}
	return (1);
}
