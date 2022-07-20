/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 04:49:48 by fwong             #+#    #+#             */
/*   Updated: 2022/06/04 13:37:19 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void))
{
	t_list	*new;
	t_list	*save;
	t_list	*tmp;

	if (!f || !lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)        
		return (0);
	save = new;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		save->next = tmp;
		save = tmp;
		lst = lst->next;
	}
	return (new);
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!f || !lst)
		return (0);
	new = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
/* 
#include <stdio.h>
#include <string.h>

void *ft_cpy(void *elem)
{
    t_list    *test;
    (void)elem;

    test = ft_lstnew("non");
    return (test);
}

void ft_print(void *elem)
{
    printf("%s\n", (char *)elem);
}

int main (int ac, char **av)
{
    (void)ac;
    t_list  *base_list;
    t_list  *new_list;

    int i = 2;
    base_list = ft_lstnew((void *)av[1]);
    while (av[i])
    {
        ft_lstadd_back(&base_list, ft_lstnew((void *)av[i]));
        i++;
    }
      new_list = ft_lstmap(base_list, ft_cpy,free);
    ft_lstiter(base_list, ft_print);
    ft_lstiter(new_list, ft_print);
} */