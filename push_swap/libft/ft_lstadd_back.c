/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 04:35:29 by fwong             #+#    #+#             */
/*   Updated: 2022/06/04 18:08:33 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/* 
#include <stdio.h>
int main (int ac, char **av)
{
    (void)ac;
    t_list *elem;
    int i = 2;
    elem = ft_lstnew((void *)av[1]);
    while (av[i])
    {
        ft_lstadd_back(&elem, ft_lstnew((void *)av[i]));
        i++;
    }
    while (elem)
    {
        printf("%s\n", (char *)elem->content);
        elem = elem->next;
    }
} */