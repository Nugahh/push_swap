/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:22:50 by fwong             #+#    #+#             */
/*   Updated: 2022/08/03 02:08:54 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf.h"

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	index_a;
	int	index_b;
	int	len_a;
	int	len_b;
}	t_data;

//swap functions
void	ft_swap(int *a, int *b);
void	swap_sa(int *stack, int len);
void	swap_sb(int *stack, int len);
void	swap_ss(int* sa, int* sb, int len);
// rotate functions
void	rotate_ra(int *stack, int size);
void	rotate_rb(int *stack, int size);
// reverse rotate functions
void	reverse_rotate_ra(int *stack, int size);
void	reverse_rotate_rb(int *stack, int size);
void	reverse_rotate_rrr(int *ra, int *rb, int size);
// push functions
void	push_a(t_data *data);
void	push_b(t_data *data);
void	ft_add_top_stack_a(t_data *data);
void	ft_add_top_stack_b(t_data *data);
void	ft_delete_top_stack_a(t_data *data);
void	ft_delete_top_stack_b(t_data *data);

// utils functions
void rotate_min(t_data *data, int min);
int	ft_is_min(t_data *data); // find min

#endif
