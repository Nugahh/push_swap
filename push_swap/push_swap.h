/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:22:50 by fwong             #+#    #+#             */
/*   Updated: 2022/07/17 17:20:28 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf.h"

void	ft_swap(int *a, int *b);
void rotate_ra(int *stack, int size);
void reverse_rotate_ra(int *stack, int size);
void	push_a(int *sa, int *sb, int size);

#endif
