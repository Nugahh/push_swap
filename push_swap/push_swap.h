/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:22:50 by fwong             #+#    #+#             */
/*   Updated: 2022/08/01 21:51:35 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf.h"

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;
	int	len_b;
}	t_data;

void	ft_swap(int *a, int *b);
void	swap_sa(int *stack, int len);
void	swap_sb(int *stack, int len);
void	swap_ss(int* sa, int* sb, int len);
void	rotate_ra(int *stack, int size);
void	rotate_rb(int *stack, int size);
void	reverse_rotate_ra(int *stack, int size);
void	reverse_rotate_rb(int *stack, int size);
void	reverse_rotate_rrr(int *ra, int *rb, int size);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	ft_delete_top_stack_a(t_data *data);

#endif
