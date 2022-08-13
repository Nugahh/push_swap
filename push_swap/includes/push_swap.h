/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:22:50 by fwong             #+#    #+#             */
/*   Updated: 2022/08/13 03:14:34 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/ft_printf.h"

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;
	int	len_b;
	int	*temp_stack;
	int	*index;
}	t_data;

//swap functions
void	ft_swap(int *a, int *b);
void	swap_sa(int *stack, int len);
void	swap_sb(int *stack, int len);
void	swap_ss(int *sa, int *sb, int len);

// rotate functions
void	rotate_ra(int *stack, int size);
void	rotate_rb(int *stack, int size);

// reverse rotate functions
void	reverse_rotate_ra(int *stack, int size);
void	reverse_rotate_rb(int *stack, int size);
void	reverse_rotate_rrr(int *ra, int *rb, int size);

// push functions
int		push_a(t_data *data);
int		push_b(t_data *data);
int		ft_add_top_stack_a(t_data *data);
int		ft_add_top_stack_b(t_data *data);
int		ft_delete_top_stack_a(t_data *data);
int		ft_delete_top_stack_b(t_data *data);

// utils functions
void	rotate_min(t_data *data, int min);
int		ft_is_min(t_data *data);

// sort small stack
void	sort_2(t_data *data);
void	sort_3(t_data *data);
void	sort_4(t_data *data);
void	sort_5(t_data *data);
int		sort_small_stack(t_data *data);

// sort big stack
int		ft_get_max_bits(t_data *data);
int		sort_big_stack(t_data *data);

// sort function
int		ft_sort(t_data *data);

// functions in order to replace stack's values by index
void	ft_sort_int_tab(int	*new_temp_stack, int len);
int		ft_sorted_index(t_data *data);
int		ft_replace_stack_by_index(t_data *data);

// parsing functions
int		ft_init_stack(t_data *data, int argc, char **argv);
int		ft_check_duplicate(char **argv, int len);
int		ft_check_parsing(char **argv, int len);

#endif
