/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:34:51 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/19 20:48:33 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*fct)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*lst2;

	lst2 = NULL;
	while (lst)
	{
		element = ft_lstnew(fct(lst->content));
		if (!element)
			ft_lstclear(&lst2, del);
		ft_lstadd_back(&lst2, element);
		lst = lst->next;
	}
	return (lst2);
}
