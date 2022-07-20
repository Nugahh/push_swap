/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:59:17 by fwong             #+#    #+#             */
/*   Updated: 2022/07/17 15:24:23 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include "libft.h"

int		ft_intlen(long long k);
int		ft_hexalen(unsigned int nb);
int		ft_unsignedintlen(unsigned int k);
void	ft_putnbr_hexa_min(unsigned int num);
void	ft_putnbr_hexa_maj(unsigned int num);
int		ft_hexa_maj(va_list args);
int		ft_hexa_min(va_list args);
int		ft_integer(va_list args);
int		ft_pointer_len(unsigned long long nb);
void	ft_pointer_hexa(unsigned long long ptr);
int		ft_pointer(va_list args);
int		ft_putchar(va_list args);
int		ft_putstr(va_list args);
void	ft_putunsignednbr(unsigned int n);
int		ft_unsignedint(va_list args);
int		ft_printf(const char *str, ...);
int		ft_fonction(char c, va_list args);
int		ft_check(char c);
int		ft_percent(void);

#endif
