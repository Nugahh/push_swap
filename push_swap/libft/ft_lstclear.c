/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 04:47:06 by fwong             #+#    #+#             */
/*   Updated: 2022/06/04 18:08:17 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst1;

	lst1 = NULL;
	while (*lst)
	{
		lst1 = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst1;
	}
}
